#!/usr/bin/env python3
"""
TensorCore Resource Estimation Tool

This script provides detailed FPGA resource utilization estimates for different
TensorCore configurations, helping with design space exploration and optimization.
"""

import argparse
import json
import math
from typing import Dict, List, Tuple
from dataclasses import dataclass
from enum import Enum

class FPGAFamily(Enum):
    ZYNQ_7000 = "zynq_7000"
    KINTEX_7 = "kintex_7"
    VIRTEX_7 = "virtex_7"
    ZYNQ_ULTRASCALE = "zynq_ultrascale"
    KINTEX_ULTRASCALE = "kintex_ultrascale"
    VERSAL = "versal"

@dataclass
class FPGASpecs:
    """FPGA device specifications."""
    luts: int
    ffs: int
    bram_18k: int
    bram_36k: int
    dsp48: int
    name: str

@dataclass
class ResourceEstimate:
    """Resource utilization estimate."""
    luts: int
    ffs: int
    bram_18k: int
    bram_36k: int
    dsp48: int
    utilization_percent: Dict[str, float]

class ResourceEstimator:
    """Estimates FPGA resource utilization for TensorCore configurations."""
    
    def __init__(self):
        # FPGA device specifications
        self.fpga_specs = {
            FPGAFamily.ZYNQ_7000: FPGASpecs(
                luts=53200, ffs=106400, bram_18k=280, bram_36k=140, dsp48=220, 
                name="XC7Z020"
            ),
            FPGAFamily.KINTEX_7: FPGASpecs(
                luts=203800, ffs=407600, bram_18k=1030, bram_36k=515, dsp48=840,
                name="XC7K325T"
            ),
            FPGAFamily.VIRTEX_7: FPGASpecs(
                luts=433200, ffs=866400, bram_18k=2940, bram_36k=1470, dsp48=2800,
                name="XC7V2000T"
            ),
            FPGAFamily.ZYNQ_ULTRASCALE: FPGASpecs(
                luts=274080, ffs=548160, bram_18k=1824, bram_36k=912, dsp48=2520,
                name="XCZU9EG"
            ),
            FPGAFamily.KINTEX_ULTRASCALE: FPGASpecs(
                luts=663360, ffs=1326720, bram_18k=2160, bram_36k=1080, dsp48=2928,
                name="XCKU115"
            ),
            FPGAFamily.VERSAL: FPGASpecs(
                luts=899840, ffs=1799680, bram_18k=4032, bram_36k=2016, dsp48=9024,
                name="XCVC1902"
            )
        }
        
        # Resource usage per component (empirical estimates)
        self.component_resources = {
            "pe_fp32": {"luts": 250, "ffs": 180, "dsp48": 1, "bram_18k": 0},
            "pe_fp16": {"luts": 180, "ffs": 120, "dsp48": 1, "bram_18k": 0},
            "pe_int8": {"luts": 120, "ffs": 80, "dsp48": 0, "bram_18k": 0},
            "pe_int4": {"luts": 80, "ffs": 60, "dsp48": 0, "bram_18k": 0},
            "axi_interface": {"luts": 2500, "ffs": 3000, "dsp48": 0, "bram_18k": 4},
            "control_unit": {"luts": 1500, "ffs": 2000, "dsp48": 0, "bram_18k": 2},
            "address_gen": {"luts": 800, "ffs": 1200, "dsp48": 0, "bram_18k": 1},
            "data_buffer": {"luts": 200, "ffs": 100, "dsp48": 0, "bram_18k": 1},
        }
    
    def estimate_pe_array(self, array_size: int, data_type: str) -> Dict[str, int]:
        """Estimate resources for PE array."""
        pe_key = f"pe_{data_type.lower()}"
        if pe_key not in self.component_resources:
            pe_key = "pe_fp32"  # Default fallback
        
        pe_resources = self.component_resources[pe_key]
        total_pes = array_size * array_size
        
        return {
            "luts": pe_resources["luts"] * total_pes,
            "ffs": pe_resources["ffs"] * total_pes,
            "dsp48": pe_resources["dsp48"] * total_pes,
            "bram_18k": pe_resources["bram_18k"] * total_pes
        }
    
    def estimate_memory_subsystem(self, array_size: int, data_type: str) -> Dict[str, int]:
        """Estimate resources for memory subsystem."""
        # Data width calculation
        data_widths = {"fp32": 32, "fp16": 16, "int8": 8, "int4": 4}
        data_width = data_widths.get(data_type.lower(), 32)
        
        # Buffer requirements for systolic array
        input_buffers = array_size * 2  # A and B matrices
        output_buffers = array_size  # C matrix
        
        # Each buffer needs BRAM based on data width and depth
        buffer_depth = 512  # Configurable depth
        bits_per_buffer = data_width * buffer_depth
        bram_18k_per_buffer = math.ceil(bits_per_buffer / 18432)
        
        total_bram_18k = (input_buffers + output_buffers) * bram_18k_per_buffer
        
        # Control logic for memory subsystem
        control_luts = 500 * array_size
        control_ffs = 300 * array_size
        
        return {
            "luts": control_luts,
            "ffs": control_ffs,
            "dsp48": 0,
            "bram_18k": total_bram_18k
        }
    
    def estimate_total_resources(self, array_size: int = 8, data_type: str = "fp16",
                               include_axi: bool = True) -> ResourceEstimate:
        """Estimate total resource utilization."""
        
        # PE array resources
        pe_resources = self.estimate_pe_array(array_size, data_type)
        
        # Memory subsystem resources
        mem_resources = self.estimate_memory_subsystem(array_size, data_type)
        
        # Infrastructure resources
        infra_resources = {
            "luts": 0, "ffs": 0, "dsp48": 0, "bram_18k": 0, "bram_36k": 0
        }
        
        if include_axi:
            axi = self.component_resources["axi_interface"]
            infra_resources["luts"] += axi["luts"]
            infra_resources["ffs"] += axi["ffs"]
            infra_resources["bram_18k"] += axi["bram_18k"]
        
        # Control unit
        ctrl = self.component_resources["control_unit"]
        infra_resources["luts"] += ctrl["luts"]
        infra_resources["ffs"] += ctrl["ffs"]
        infra_resources["bram_18k"] += ctrl["bram_18k"]
        
        # Address generator
        addr = self.component_resources["address_gen"]
        infra_resources["luts"] += addr["luts"]
        infra_resources["ffs"] += addr["ffs"]
        infra_resources["bram_18k"] += addr["bram_18k"]
        
        # Total resources
        total_luts = pe_resources["luts"] + mem_resources["luts"] + infra_resources["luts"]
        total_ffs = pe_resources["ffs"] + mem_resources["ffs"] + infra_resources["ffs"]
        total_dsp48 = pe_resources["dsp48"] + mem_resources["dsp48"] + infra_resources["dsp48"]
        total_bram_18k = pe_resources["bram_18k"] + mem_resources["bram_18k"] + infra_resources["bram_18k"]
        total_bram_36k = math.ceil(total_bram_18k / 2)  # Convert some 18K to 36K
        
        return ResourceEstimate(
            luts=total_luts,
            ffs=total_ffs,
            bram_18k=total_bram_18k,
            bram_36k=total_bram_36k,
            dsp48=total_dsp48,
            utilization_percent={}
        )
    
    def calculate_utilization(self, estimate: ResourceEstimate, 
                            fpga_family: FPGAFamily) -> ResourceEstimate:
        """Calculate utilization percentages for target FPGA."""
        specs = self.fpga_specs[fpga_family]
        
        estimate.utilization_percent = {
            "luts": (estimate.luts / specs.luts) * 100,
            "ffs": (estimate.ffs / specs.ffs) * 100,
            "bram_18k": (estimate.bram_18k / specs.bram_18k) * 100,
            "bram_36k": (estimate.bram_36k / specs.bram_36k) * 100,
            "dsp48": (estimate.dsp48 / specs.dsp48) * 100
        }
        
        return estimate
    
    def find_optimal_configuration(self, fpga_family: FPGAFamily, 
                                 target_utilization: float = 80.0) -> List[Dict]:
        """Find optimal configurations for target FPGA."""
        configurations = []
        
        array_sizes = [4, 6, 8, 10, 12, 16]
        data_types = ["fp32", "fp16", "int8", "int4"]
        
        for array_size in array_sizes:
            for data_type in data_types:
                estimate = self.estimate_total_resources(array_size, data_type)
                estimate = self.calculate_utilization(estimate, fpga_family)
                
                # Check if configuration fits within target utilization
                max_util = max(estimate.utilization_percent.values())
                
                if max_util <= target_utilization:
                    configurations.append({
                        "array_size": f"{array_size}x{array_size}",
                        "data_type": data_type,
                        "max_utilization": round(max_util, 1),
                        "resources": {
                            "luts": estimate.luts,
                            "ffs": estimate.ffs,
                            "dsp48": estimate.dsp48,
                            "bram_18k": estimate.bram_18k
                        },
                        "utilization": {k: round(v, 1) for k, v in estimate.utilization_percent.items()}
                    })
        
        # Sort by utilization (highest first)
        configurations.sort(key=lambda x: x["max_utilization"], reverse=True)
        return configurations
    
    def generate_report(self, fpga_family: FPGAFamily = FPGAFamily.ZYNQ_ULTRASCALE,
                       array_size: int = 8, data_type: str = "fp16") -> str:
        """Generate comprehensive resource estimation report."""
        
        estimate = self.estimate_total_resources(array_size, data_type)
        estimate = self.calculate_utilization(estimate, fpga_family)
        specs = self.fpga_specs[fpga_family]
        
        report = []
        report.append("=" * 70)
        report.append("TensorCore FPGA Resource Estimation Report")
        report.append("=" * 70)
        report.append(f"Target FPGA: {specs.name} ({fpga_family.value})")
        report.append(f"Configuration: {array_size}x{array_size} array, {data_type.upper()}")
        report.append("")
        
        report.append("Resource Utilization:")
        report.append("-" * 40)
        report.append(f"LUTs:      {estimate.luts:6d} / {specs.luts:6d} ({estimate.utilization_percent['luts']:5.1f}%)")
        report.append(f"FFs:       {estimate.ffs:6d} / {specs.ffs:6d} ({estimate.utilization_percent['ffs']:5.1f}%)")
        report.append(f"BRAM 18K:  {estimate.bram_18k:6d} / {specs.bram_18k:6d} ({estimate.utilization_percent['bram_18k']:5.1f}%)")
        report.append(f"BRAM 36K:  {estimate.bram_36k:6d} / {specs.bram_36k:6d} ({estimate.utilization_percent['bram_36k']:5.1f}%)")
        report.append(f"DSP48:     {estimate.dsp48:6d} / {specs.dsp48:6d} ({estimate.utilization_percent['dsp48']:5.1f}%)")
        report.append("")
        
        # Check if design fits
        max_util = max(estimate.utilization_percent.values())
        if max_util > 100:
            report.append("⚠️  WARNING: Design exceeds FPGA capacity!")
            bottleneck = max(estimate.utilization_percent.items(), key=lambda x: x[1])
            report.append(f"   Bottleneck: {bottleneck[0]} ({bottleneck[1]:.1f}%)")
        elif max_util > 85:
            report.append("⚠️  CAUTION: High resource utilization (>85%)")
        else:
            report.append("✅ Design fits comfortably on target FPGA")
        
        report.append("")
        
        # Optimal configurations
        report.append("Optimal Configurations for this FPGA:")
        report.append("-" * 40)
        optimal_configs = self.find_optimal_configuration(fpga_family, 85.0)
        
        for i, config in enumerate(optimal_configs[:5]):  # Top 5
            report.append(f"{i+1}. {config['array_size']} {config['data_type'].upper()} "
                         f"(Max util: {config['max_utilization']}%)")
        
        return "\n".join(report)

def main():
    """Main function for command-line interface."""
    parser = argparse.ArgumentParser(description="TensorCore FPGA Resource Estimator")
    parser.add_argument("--fpga", choices=[f.value for f in FPGAFamily], 
                       default="zynq_ultrascale", help="Target FPGA family")
    parser.add_argument("--array-size", type=int, default=8,
                       help="Systolic array size (default: 8)")
    parser.add_argument("--data-type", choices=["fp32", "fp16", "int8", "int4"],
                       default="fp16", help="Data type (default: fp16)")
    parser.add_argument("--format", choices=["text", "json"], default="text",
                       help="Output format")
    parser.add_argument("--optimal", action="store_true",
                       help="Show optimal configurations only")
    
    args = parser.parse_args()
    
    estimator = ResourceEstimator()
    fpga_family = FPGAFamily(args.fpga)
    
    if args.optimal:
        configs = estimator.find_optimal_configuration(fpga_family)
        if args.format == "json":
            print(json.dumps(configs, indent=2))
        else:
            print("Optimal TensorCore Configurations:")
            print("=" * 50)
            for i, config in enumerate(configs[:10]):
                print(f"{i+1:2d}. {config['array_size']} {config['data_type'].upper()} "
                      f"- Max Util: {config['max_utilization']}%")
    else:
        if args.format == "json":
            estimate = estimator.estimate_total_resources(args.array_size, args.data_type)
            estimate = estimator.calculate_utilization(estimate, fpga_family)
            data = {
                "fpga": fpga_family.value,
                "configuration": {
                    "array_size": f"{args.array_size}x{args.array_size}",
                    "data_type": args.data_type
                },
                "resources": {
                    "luts": estimate.luts,
                    "ffs": estimate.ffs,
                    "bram_18k": estimate.bram_18k,
                    "bram_36k": estimate.bram_36k,
                    "dsp48": estimate.dsp48
                },
                "utilization_percent": estimate.utilization_percent
            }
            print(json.dumps(data, indent=2))
        else:
            report = estimator.generate_report(fpga_family, args.array_size, args.data_type)
            print(report)

if __name__ == "__main__":
    main()