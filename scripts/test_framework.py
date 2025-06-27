#!/usr/bin/env python3
"""
TensorCore Test Framework

Comprehensive testing framework for TensorCore hardware accelerator
with support for multiple test scenarios and automated verification.
"""

import os
import sys
import subprocess
import json
import time
import random
import numpy as np
from typing import List, Dict, Tuple, Optional
from dataclasses import dataclass
from enum import Enum
import argparse

class TestType(Enum):
    UNIT = "unit"
    INTEGRATION = "integration"
    PERFORMANCE = "performance"
    REGRESSION = "regression"
    STRESS = "stress"

class DataType(Enum):
    FP32 = "fp32"
    FP16 = "fp16"
    INT8 = "int8"
    INT4 = "int4"

class MatrixShape(Enum):
    M32K16N8 = (32, 16, 8)
    M16K16N16 = (16, 16, 16)
    M8K16N32 = (8, 16, 32)

@dataclass
class TestCase:
    """Represents a single test case."""
    name: str
    test_type: TestType
    data_type: DataType
    matrix_shape: MatrixShape
    mixed_precision: bool
    expected_cycles: Optional[int]
    tolerance: float
    description: str

@dataclass
class TestResult:
    """Represents test execution results."""
    test_case: TestCase
    passed: bool
    execution_time: float
    cycles_taken: Optional[int]
    error_message: Optional[str]
    performance_metrics: Dict[str, float]

class TensorCoreTestFramework:
    """Comprehensive test framework for TensorCore."""
    
    def __init__(self, build_dir: str = "obj_dir", verilator_exe: str = "Vtensorcore"):
        self.build_dir = build_dir
        self.verilator_exe = verilator_exe
        self.test_results: List[TestResult] = []
        self.test_data_dir = "test_data"
        
        # Create test data directory
        os.makedirs(self.test_data_dir, exist_ok=True)
        
        # Define test cases
        self.test_cases = self._define_test_cases()
    
    def _define_test_cases(self) -> List[TestCase]:
        """Define comprehensive test cases."""
        test_cases = []
        
        # Unit tests - basic functionality
        test_cases.extend([
            TestCase(
                name="basic_fp32_small",
                test_type=TestType.UNIT,
                data_type=DataType.FP32,
                matrix_shape=MatrixShape.M8K16N32,
                mixed_precision=False,
                expected_cycles=50,
                tolerance=0.01,
                description="Basic FP32 computation with small matrices"
            ),
            TestCase(
                name="basic_fp16_normal",
                test_type=TestType.UNIT,
                data_type=DataType.FP16,
                matrix_shape=MatrixShape.M16K16N16,
                mixed_precision=False,
                expected_cycles=40,
                tolerance=0.01,
                description="Basic FP16 computation with normal matrices"
            ),
            TestCase(
                name="basic_int8_large",
                test_type=TestType.UNIT,
                data_type=DataType.INT8,
                matrix_shape=MatrixShape.M32K16N8,
                mixed_precision=False,
                expected_cycles=35,
                tolerance=0.05,
                description="Basic INT8 computation with large matrices"
            ),
            TestCase(
                name="basic_int4_normal",
                test_type=TestType.UNIT,
                data_type=DataType.INT4,
                matrix_shape=MatrixShape.M16K16N16,
                mixed_precision=False,
                expected_cycles=30,
                tolerance=0.1,
                description="Basic INT4 computation"
            )
        ])
        
        # Mixed precision tests
        test_cases.extend([
            TestCase(
                name="mixed_precision_fp16",
                test_type=TestType.INTEGRATION,
                data_type=DataType.FP16,
                matrix_shape=MatrixShape.M16K16N16,
                mixed_precision=True,
                expected_cycles=45,
                tolerance=0.02,
                description="Mixed precision FP16 with FP32 accumulation"
            )
        ])
        
        # Performance tests
        test_cases.extend([
            TestCase(
                name="performance_fp32_max",
                test_type=TestType.PERFORMANCE,
                data_type=DataType.FP32,
                matrix_shape=MatrixShape.M32K16N8,
                mixed_precision=False,
                expected_cycles=60,
                tolerance=0.05,
                description="Maximum performance test for FP32"
            ),
            TestCase(
                name="performance_int8_throughput",
                test_type=TestType.PERFORMANCE,
                data_type=DataType.INT8,
                matrix_shape=MatrixShape.M32K16N8,
                mixed_precision=False,
                expected_cycles=35,
                tolerance=0.05,
                description="Throughput test for INT8"
            )
        ])
        
        # Stress tests
        test_cases.extend([
            TestCase(
                name="stress_continuous_operation",
                test_type=TestType.STRESS,
                data_type=DataType.FP16,
                matrix_shape=MatrixShape.M16K16N16,
                mixed_precision=False,
                expected_cycles=None,
                tolerance=0.1,
                description="Continuous operation stress test"
            )
        ])
        
        return test_cases
    
    def generate_test_data(self, test_case: TestCase) -> Tuple[np.ndarray, np.ndarray, np.ndarray]:
        """Generate test data for a given test case."""
        m, k, n = test_case.matrix_shape.value
        
        # Set random seed for reproducibility
        np.random.seed(42)
        
        if test_case.data_type == DataType.FP32:
            dtype = np.float32
            scale = 1.0
        elif test_case.data_type == DataType.FP16:
            dtype = np.float16
            scale = 1.0
        elif test_case.data_type == DataType.INT8:
            dtype = np.int8
            scale = 127
        else:  # INT4
            dtype = np.int8  # Use int8 but limit range
            scale = 7
        
        # Generate matrices
        if test_case.data_type in [DataType.FP32, DataType.FP16]:
            A = np.random.randn(m, k).astype(dtype) * scale
            B = np.random.randn(k, n).astype(dtype) * scale
            C = np.random.randn(m, n).astype(dtype) * scale * 0.1  # Smaller initial values
        else:
            A = np.random.randint(-scale, scale+1, (m, k), dtype=dtype)
            B = np.random.randint(-scale, scale+1, (k, n), dtype=dtype)
            C = np.random.randint(-scale//4, scale//4+1, (m, n), dtype=dtype)
        
        return A, B, C
    
    def save_test_data(self, test_case: TestCase, A: np.ndarray, B: np.ndarray, C: np.ndarray) -> str:
        """Save test data to files."""
        test_dir = os.path.join(self.test_data_dir, test_case.name)
        os.makedirs(test_dir, exist_ok=True)
        
        # Save matrices
        np.save(os.path.join(test_dir, "matrix_A.npy"), A)
        np.save(os.path.join(test_dir, "matrix_B.npy"), B)
        np.save(os.path.join(test_dir, "matrix_C.npy"), C)
        
        # Save test configuration
        config = {
            "name": test_case.name,
            "data_type": test_case.data_type.value,
            "matrix_shape": test_case.matrix_shape.value,
            "mixed_precision": test_case.mixed_precision,
            "description": test_case.description
        }
        
        with open(os.path.join(test_dir, "config.json"), 'w') as f:
            json.dump(config, f, indent=2)
        
        return test_dir
    
    def run_verilator_simulation(self, test_case: TestCase, test_dir: str) -> TestResult:
        """Run Verilator simulation for a test case."""
        start_time = time.time()
        
        try:
            # Build command
            exe_path = os.path.join(self.build_dir, self.verilator_exe)
            if not os.path.exists(exe_path):
                raise FileNotFoundError(f"Verilator executable not found: {exe_path}")
            
            # Prepare simulation arguments
            cmd = [exe_path]
            
            # Add test-specific arguments if needed
            env = os.environ.copy()
            env["TEST_DATA_DIR"] = test_dir
            env["DATA_TYPE"] = test_case.data_type.value
            env["MIXED_PRECISION"] = "1" if test_case.mixed_precision else "0"
            
            # Run simulation
            result = subprocess.run(
                cmd,
                cwd=os.path.dirname(exe_path),
                env=env,
                capture_output=True,
                text=True,
                timeout=60  # 60 second timeout
            )
            
            execution_time = time.time() - start_time
            
            # Parse results
            if result.returncode == 0:
                # Extract performance metrics from output
                cycles_taken = self._extract_cycles_from_output(result.stdout)
                performance_metrics = self._extract_performance_metrics(result.stdout)
                
                # Check if test passed
                passed = self._verify_test_results(test_case, test_dir, result.stdout)
                
                return TestResult(
                    test_case=test_case,
                    passed=passed,
                    execution_time=execution_time,
                    cycles_taken=cycles_taken,
                    error_message=None if passed else "Verification failed",
                    performance_metrics=performance_metrics
                )
            else:
                return TestResult(
                    test_case=test_case,
                    passed=False,
                    execution_time=execution_time,
                    cycles_taken=None,
                    error_message=f"Simulation failed: {result.stderr}",
                    performance_metrics={}
                )
                
        except subprocess.TimeoutExpired:
            return TestResult(
                test_case=test_case,
                passed=False,
                execution_time=60.0,
                cycles_taken=None,
                error_message="Simulation timeout",
                performance_metrics={}
            )
        except Exception as e:
            return TestResult(
                test_case=test_case,
                passed=False,
                execution_time=time.time() - start_time,
                cycles_taken=None,
                error_message=f"Error: {str(e)}",
                performance_metrics={}
            )
    
    def _extract_cycles_from_output(self, output: str) -> Optional[int]:
        """Extract cycle count from simulation output."""
        import re
        match = re.search(r'Cycles:\s*(\d+)', output)
        return int(match.group(1)) if match else None
    
    def _extract_performance_metrics(self, output: str) -> Dict[str, float]:
        """Extract performance metrics from simulation output."""
        metrics = {}
        import re
        
        # Look for various performance indicators
        patterns = {
            "throughput_gops": r'Throughput:\s*([\d.]+)\s*GOPS',
            "power_mw": r'Power:\s*([\d.]+)\s*mW',
            "efficiency": r'Efficiency:\s*([\d.]+)\s*GOPS/W'
        }
        
        for metric, pattern in patterns.items():
            match = re.search(pattern, output)
            if match:
                metrics[metric] = float(match.group(1))
        
        return metrics
    
    def _verify_test_results(self, test_case: TestCase, test_dir: str, output: str) -> bool:
        """Verify test results against expected values."""
        try:
            # Load expected results (golden reference)
            expected_file = os.path.join(test_dir, "expected_output.npy")
            if os.path.exists(expected_file):
                expected = np.load(expected_file)
                
                # Extract actual results from simulation output
                # This would need to be implemented based on actual output format
                # For now, assume simulation writes results to a file
                actual_file = os.path.join(test_dir, "actual_output.npy")
                if os.path.exists(actual_file):
                    actual = np.load(actual_file)
                    
                    # Compare with tolerance
                    if np.allclose(expected, actual, rtol=test_case.tolerance):
                        return True
                    else:
                        print(f"Numerical mismatch in {test_case.name}")
                        print(f"Max error: {np.max(np.abs(expected - actual))}")
                        return False
            
            # If no golden reference, check for basic sanity
            return "ERROR" not in output.upper() and "FAIL" not in output.upper()
            
        except Exception as e:
            print(f"Verification error for {test_case.name}: {e}")
            return False
    
    def run_test_suite(self, test_types: List[TestType] = None) -> List[TestResult]:
        """Run complete test suite."""
        if test_types is None:
            test_types = list(TestType)
        
        # Filter test cases by type
        filtered_tests = [tc for tc in self.test_cases if tc.test_type in test_types]
        
        print(f"Running {len(filtered_tests)} test cases...")
        
        for i, test_case in enumerate(filtered_tests, 1):
            print(f"\n[{i}/{len(filtered_tests)}] Running {test_case.name}...")
            
            # Generate test data
            A, B, C = self.generate_test_data(test_case)
            test_dir = self.save_test_data(test_case, A, B, C)
            
            # Generate golden reference
            self._generate_golden_reference(test_case, test_dir, A, B, C)
            
            # Run simulation
            result = self.run_verilator_simulation(test_case, test_dir)
            self.test_results.append(result)
            
            # Print immediate result
            status = "✅ PASS" if result.passed else "❌ FAIL"
            print(f"   {status} ({result.execution_time:.2f}s)")
            if not result.passed and result.error_message:
                print(f"   Error: {result.error_message}")
        
        return self.test_results
    
    def _generate_golden_reference(self, test_case: TestCase, test_dir: str, 
                                 A: np.ndarray, B: np.ndarray, C: np.ndarray) -> None:
        """Generate golden reference results."""
        # Compute expected result: C = A * B + C
        if test_case.mixed_precision and test_case.data_type == DataType.FP16:
            # Mixed precision: compute in FP32, store in FP16
            A_fp32 = A.astype(np.float32)
            B_fp32 = B.astype(np.float32)
            C_fp32 = C.astype(np.float32)
            result = np.matmul(A_fp32, B_fp32) + C_fp32
            result = result.astype(np.float16)
        else:
            result = np.matmul(A, B) + C
        
        # Save golden reference
        np.save(os.path.join(test_dir, "expected_output.npy"), result)
    
    def generate_report(self, output_format: str = "text") -> str:
        """Generate test report."""
        if output_format == "json":
            return self._generate_json_report()
        else:
            return self._generate_text_report()
    
    def _generate_text_report(self) -> str:
        """Generate text format test report."""
        if not self.test_results:
            return "No test results available."
        
        report = []
        report.append("=" * 70)
        report.append("TensorCore Test Framework Report")
        report.append("=" * 70)
        
        # Summary
        total_tests = len(self.test_results)
        passed_tests = sum(1 for r in self.test_results if r.passed)
        failed_tests = total_tests - passed_tests
        
        report.append(f"Total Tests: {total_tests}")
        report.append(f"Passed:      {passed_tests} ({passed_tests/total_tests*100:.1f}%)")
        report.append(f"Failed:      {failed_tests} ({failed_tests/total_tests*100:.1f}%)")
        report.append("")
        
        # Results by test type
        by_type = {}
        for result in self.test_results:
            test_type = result.test_case.test_type
            if test_type not in by_type:
                by_type[test_type] = {"passed": 0, "failed": 0}
            
            if result.passed:
                by_type[test_type]["passed"] += 1
            else:
                by_type[test_type]["failed"] += 1
        
        report.append("Results by Test Type:")
        report.append("-" * 30)
        for test_type, counts in by_type.items():
            total = counts["passed"] + counts["failed"]
            pass_rate = counts["passed"] / total * 100 if total > 0 else 0
            report.append(f"{test_type.value.upper():12} {counts['passed']:2d}/{total:2d} ({pass_rate:5.1f}%)")
        
        report.append("")
        
        # Failed tests details
        failed_results = [r for r in self.test_results if not r.passed]
        if failed_results:
            report.append("Failed Tests:")
            report.append("-" * 20)
            for result in failed_results:
                report.append(f"❌ {result.test_case.name}")
                report.append(f"   Type: {result.test_case.test_type.value}")
                report.append(f"   Error: {result.error_message}")
                report.append("")
        
        # Performance summary
        perf_results = [r for r in self.test_results if r.passed and r.performance_metrics]
        if perf_results:
            report.append("Performance Summary:")
            report.append("-" * 25)
            
            avg_throughput = np.mean([r.performance_metrics.get("throughput_gops", 0) 
                                    for r in perf_results if "throughput_gops" in r.performance_metrics])
            if avg_throughput > 0:
                report.append(f"Average Throughput: {avg_throughput:.2f} GOPS")
            
            avg_power = np.mean([r.performance_metrics.get("power_mw", 0) 
                               for r in perf_results if "power_mw" in r.performance_metrics])
            if avg_power > 0:
                report.append(f"Average Power: {avg_power:.1f} mW")
        
        return "\n".join(report)
    
    def _generate_json_report(self) -> str:
        """Generate JSON format test report."""
        import json
        
        data = {
            "summary": {
                "total_tests": len(self.test_results),
                "passed_tests": sum(1 for r in self.test_results if r.passed),
                "failed_tests": sum(1 for r in self.test_results if not r.passed),
                "execution_time": sum(r.execution_time for r in self.test_results)
            },
            "results": [
                {
                    "name": r.test_case.name,
                    "type": r.test_case.test_type.value,
                    "data_type": r.test_case.data_type.value,
                    "matrix_shape": r.test_case.matrix_shape.value,
                    "mixed_precision": r.test_case.mixed_precision,
                    "passed": r.passed,
                    "execution_time": r.execution_time,
                    "cycles_taken": r.cycles_taken,
                    "error_message": r.error_message,
                    "performance_metrics": r.performance_metrics
                }
                for r in self.test_results
            ]
        }
        
        return json.dumps(data, indent=2)

def main():
    """Main function for command-line interface."""
    parser = argparse.ArgumentParser(description="TensorCore Test Framework")
    parser.add_argument("--build-dir", default="obj_dir", help="Verilator build directory")
    parser.add_argument("--exe", default="Vtensorcore", help="Verilator executable name")
    parser.add_argument("--test-types", nargs="+", choices=[t.value for t in TestType],
                       help="Test types to run")
    parser.add_argument("--format", choices=["text", "json"], default="text",
                       help="Output format")
    parser.add_argument("--output", help="Output file for report")
    
    args = parser.parse_args()
    
    # Create test framework
    framework = TensorCoreTestFramework(args.build_dir, args.exe)
    
    # Determine test types to run
    if args.test_types:
        test_types = [TestType(t) for t in args.test_types]
    else:
        test_types = [TestType.UNIT, TestType.INTEGRATION]  # Default to basic tests
    
    # Run tests
    results = framework.run_test_suite(test_types)
    
    # Generate report
    report = framework.generate_report(args.format)
    
    # Output report
    if args.output:
        with open(args.output, 'w') as f:
            f.write(report)
        print(f"Report saved to {args.output}")
    else:
        print("\n" + report)
    
    # Exit with appropriate code
    failed_tests = sum(1 for r in results if not r.passed)
    sys.exit(failed_tests)

if __name__ == "__main__":
    main()