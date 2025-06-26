#!/usr/bin/env python3
"""
TensorCore Performance Analysis Tool

This script analyzes the performance characteristics of the TensorCore design
and provides estimates for throughput, latency, and resource utilization.
"""

import argparse
import json
import sys
from typing import Dict, Any, Tuple
from dataclasses import dataclass
from enum import Enum

class DataType(Enum):
    FP32 = "fp32"
    FP16 = "fp16"
    INT8 = "int8"
    INT4 = "int4"

class MatrixShape(Enum):
    M32K16N8 = "32x16x8"
    M16K16N16 = "16x16x16"
    M8K16N32 = "8x16x32"

@dataclass
class PerformanceMetrics:
    """Performance metrics for TensorCore operations."""
    throughput_gops: float
    latency_cycles: int
    power_mw: float
    efficiency_gops_per_watt: float
    resource_utilization: Dict[str, int]

class TensorCoreAnalyzer:
    """Analyzes TensorCore performance characteristics."""
    
    def __init__(self, clock_freq_mhz: float = 200.0):
        self.clock_freq_mhz = clock_freq_mhz
        self.array_size = 8  # 8x8 systolic array
        
        # Performance characteristics per data type
        self.data_type_specs = {
            DataType.FP32: {
                "bits_per_element": 32,
                "ops_per_mac": 2,  # multiply + add
                "pipeline_depth": 2,
                "power_factor": 1.0
            },
            DataType.FP16: {
                "bits_per_element": 16,
                "ops_per_mac": 2,
                "pipeline_depth": 2,
                "power_factor": 0.6
            },
            DataType.INT8: {
                "bits_per_element": 8,
                "ops_per_mac": 2,
                "pipeline_depth": 1,
                "power_factor": 0.3
            },
            DataType.INT4: {
                "bits_per_element": 4,
                "ops_per_mac": 2,
                "pipeline_depth": 1,
                "power_factor": 0.15
            }
        }
        
        # Matrix shape specifications
        self.shape_specs = {
            MatrixShape.M32K16N8: {"m": 32, "k": 16, "n": 8},
            MatrixShape.M16K16N16: {"m": 16, "k": 16, "n": 16},
            MatrixShape.M8K16N32: {"m": 8, "k": 16, "n": 32}
        }
    
    def calculate_throughput(self, data_type: DataType, mixed_precision: bool = False) -> float:
        """Calculate peak throughput in GOPS."""
        specs = self.data_type_specs[data_type]
        
        # Peak MAC operations per cycle
        mac_ops_per_cycle = self.array_size * self.array_size  # 8x8 = 64
        
        # Operations per MAC (multiply + accumulate)
        ops_per_mac = specs["ops_per_mac"]
        
        # Mixed precision affects accumulation
        if mixed_precision and data_type == DataType.FP16:
            ops_per_mac *= 1.2  # Slight overhead for mixed precision
        
        # Total operations per cycle
        ops_per_cycle = mac_ops_per_cycle * ops_per_mac
        
        # Convert to GOPS
        throughput_gops = (ops_per_cycle * self.clock_freq_mhz) / 1000.0
        
        return throughput_gops
    
    def calculate_latency(self, data_type: DataType, shape: MatrixShape) -> int:
        """Calculate latency in clock cycles."""
        specs = self.data_type_specs[data_type]
        shape_spec = self.shape_specs[shape]
        
        # Pipeline depth
        pipeline_depth = specs["pipeline_depth"]
        
        # Systolic array fill time
        fill_time = self.array_size - 1
        
        # Computation time (depends on matrix dimensions)
        k_dimension = shape_spec["k"]
        compute_time = k_dimension
        
        # Drain time
        drain_time = self.array_size - 1
        
        # Total latency
        total_latency = fill_time + compute_time + drain_time + pipeline_depth
        
        return total_latency
    
    def calculate_power(self, data_type: DataType, utilization: float = 1.0) -> float:
        """Calculate power consumption in mW."""
        specs = self.data_type_specs[data_type]
        
        # Base power consumption (estimated)
        base_power_mw = 500.0  # Static power
        
        # Dynamic power per MAC unit
        mac_power_mw = 10.0 * specs["power_factor"]
        
        # Total dynamic power
        dynamic_power_mw = mac_power_mw * (self.array_size ** 2) * utilization
        
        return base_power_mw + dynamic_power_mw
    
    def estimate_resources(self, data_type: DataType) -> Dict[str, int]:
        """Estimate FPGA resource utilization."""
        specs = self.data_type_specs[data_type]
        
        # Base resource estimates
        base_resources = {
            "LUTs": 25000,
            "FFs": 30000,
            "BRAM": 64,
            "DSP": 0
        }
        
        # MAC unit resources
        mac_count = self.array_size ** 2
        mac_resources = {
            "LUTs": 200 * mac_count,
            "FFs": 150 * mac_count,
            "BRAM": 0,
            "DSP": mac_count if specs["bits_per_element"] >= 16 else mac_count // 2
        }
        
        # Total resources
        total_resources = {}
        for resource in base_resources:
            total_resources[resource] = base_resources[resource] + mac_resources[resource]
        
        return total_resources
    
    def analyze_performance(self, data_type: DataType, shape: MatrixShape, 
                          mixed_precision: bool = False) -> PerformanceMetrics:
        """Perform comprehensive performance analysis."""
        
        # Calculate metrics
        throughput = self.calculate_throughput(data_type, mixed_precision)
        latency = self.calculate_latency(data_type, shape)
        power = self.calculate_power(data_type)
        resources = self.estimate_resources(data_type)
        
        # Calculate efficiency
        efficiency = throughput / (power / 1000.0)  # GOPS/W
        
        return PerformanceMetrics(
            throughput_gops=throughput,
            latency_cycles=latency,
            power_mw=power,
            efficiency_gops_per_watt=efficiency,
            resource_utilization=resources
        )
    
    def generate_report(self, output_format: str = "text") -> str:
        """Generate comprehensive performance report."""
        
        if output_format == "json":
            return self._generate_json_report()
        else:
            return self._generate_text_report()
    
    def _generate_text_report(self) -> str:
        """Generate text format report."""
        report = []
        report.append("=" * 60)
        report.append("TensorCore Performance Analysis Report")
        report.append("=" * 60)
        report.append(f"Clock Frequency: {self.clock_freq_mhz} MHz")
        report.append(f"Systolic Array Size: {self.array_size}x{self.array_size}")
        report.append("")
        
        # Analyze all combinations
        for data_type in DataType:
            for shape in MatrixShape:
                for mixed in [False, True]:
                    if mixed and data_type != DataType.FP16:
                        continue  # Mixed precision only for FP16
                    
                    metrics = self.analyze_performance(data_type, shape, mixed)
                    
                    report.append(f"Configuration: {data_type.value.upper()} {shape.value}")
                    if mixed:
                        report.append("  Mixed Precision: Enabled")
                    report.append(f"  Throughput: {metrics.throughput_gops:.2f} GOPS")
                    report.append(f"  Latency: {metrics.latency_cycles} cycles")
                    report.append(f"  Power: {metrics.power_mw:.1f} mW")
                    report.append(f"  Efficiency: {metrics.efficiency_gops_per_watt:.2f} GOPS/W")
                    report.append(f"  Resources: LUTs={metrics.resource_utilization['LUTs']}, "
                                f"DSPs={metrics.resource_utilization['DSP']}")
                    report.append("")
        
        return "\n".join(report)
    
    def _generate_json_report(self) -> str:
        """Generate JSON format report."""
        data = {
            "configuration": {
                "clock_freq_mhz": self.clock_freq_mhz,
                "array_size": f"{self.array_size}x{self.array_size}"
            },
            "performance_data": []
        }
        
        for data_type in DataType:
            for shape in MatrixShape:
                for mixed in [False, True]:
                    if mixed and data_type != DataType.FP16:
                        continue
                    
                    metrics = self.analyze_performance(data_type, shape, mixed)
                    
                    entry = {
                        "data_type": data_type.value,
                        "matrix_shape": shape.value,
                        "mixed_precision": mixed,
                        "throughput_gops": round(metrics.throughput_gops, 2),
                        "latency_cycles": metrics.latency_cycles,
                        "power_mw": round(metrics.power_mw, 1),
                        "efficiency_gops_per_watt": round(metrics.efficiency_gops_per_watt, 2),
                        "resource_utilization": metrics.resource_utilization
                    }
                    
                    data["performance_data"].append(entry)
        
        return json.dumps(data, indent=2)

def main():
    """Main function for command-line interface."""
    parser = argparse.ArgumentParser(description="TensorCore Performance Analysis Tool")
    parser.add_argument("--clock-freq", type=float, default=200.0,
                       help="Clock frequency in MHz (default: 200.0)")
    parser.add_argument("--format", choices=["text", "json"], default="text",
                       help="Output format (default: text)")
    parser.add_argument("--output", type=str, help="Output file (default: stdout)")
    
    args = parser.parse_args()
    
    # Create analyzer
    analyzer = TensorCoreAnalyzer(clock_freq_mhz=args.clock_freq)
    
    # Generate report
    report = analyzer.generate_report(output_format=args.format)
    
    # Output report
    if args.output:
        with open(args.output, 'w') as f:
            f.write(report)
        print(f"Report saved to {args.output}")
    else:
        print(report)

if __name__ == "__main__":
    main()