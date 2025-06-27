#!/usr/bin/env python3
"""
TensorCore Code Optimization Tool

This script analyzes SystemVerilog code for optimization opportunities
and suggests improvements for better maintainability and performance.
"""

import os
import re
import argparse
from typing import List, Dict, Tuple, Set
from dataclasses import dataclass
from pathlib import Path

@dataclass
class OptimizationSuggestion:
    """Represents a code optimization suggestion."""
    file_path: str
    line_number: int
    issue_type: str
    description: str
    suggestion: str
    severity: str  # "high", "medium", "low"

class SystemVerilogOptimizer:
    """Analyzes SystemVerilog code for optimization opportunities."""
    
    def __init__(self):
        self.suggestions: List[OptimizationSuggestion] = []
        
        # Patterns to detect optimization opportunities
        self.patterns = {
            "repetitive_case": re.compile(r'case\s*\([^)]+\)\s*\n(.*?)\n\s*endcase', re.DOTALL),
            "magic_numbers": re.compile(r'\b\d{2,}\b'),
            "long_lines": re.compile(r'^.{100,}$'),
            "todo_comments": re.compile(r'//\s*TODO[:\s](.*)$', re.IGNORECASE),
            "hardcoded_values": re.compile(r'\b(6\'d31|32\'h[0-9a-fA-F]+)\b'),
            "repetitive_assignments": re.compile(r'(\w+)\s*<=\s*([^;]+);'),
            "unused_signals": re.compile(r'logic\s+(?:\[[^\]]+\])?\s*(\w+);'),
            "clock_domain": re.compile(r'always_ff\s*@\s*\(posedge\s+(\w+)\)'),
            "reset_patterns": re.compile(r'if\s*\(\s*(\w*rst\w*)\s*\)'),
        }
    
    def analyze_file(self, file_path: str) -> None:
        """Analyze a single SystemVerilog file."""
        try:
            with open(file_path, 'r', encoding='utf-8') as f:
                content = f.read()
                lines = content.split('\n')
            
            self._check_code_structure(file_path, content, lines)
            self._check_naming_conventions(file_path, lines)
            self._check_performance_patterns(file_path, lines)
            self._check_maintainability(file_path, lines)
            
        except Exception as e:
            print(f"Error analyzing {file_path}: {e}")
    
    def _check_code_structure(self, file_path: str, content: str, lines: List[str]) -> None:
        """Check code structure and organization."""
        
        # Check for repetitive case statements
        case_matches = self.patterns["repetitive_case"].findall(content)
        if len(case_matches) > 3:
            self.suggestions.append(OptimizationSuggestion(
                file_path=file_path,
                line_number=1,
                issue_type="Code Structure",
                description="Multiple similar case statements detected",
                suggestion="Consider using functions or generate blocks to reduce repetition",
                severity="medium"
            ))
        
        # Check for long lines
        for i, line in enumerate(lines, 1):
            if len(line) > 100:
                self.suggestions.append(OptimizationSuggestion(
                    file_path=file_path,
                    line_number=i,
                    issue_type="Code Style",
                    description=f"Line too long ({len(line)} characters)",
                    suggestion="Break long lines for better readability",
                    severity="low"
                ))
        
        # Check for TODO comments
        for i, line in enumerate(lines, 1):
            todo_match = self.patterns["todo_comments"].search(line)
            if todo_match:
                self.suggestions.append(OptimizationSuggestion(
                    file_path=file_path,
                    line_number=i,
                    issue_type="Technical Debt",
                    description=f"TODO comment: {todo_match.group(1).strip()}",
                    suggestion="Address TODO items before production",
                    severity="medium"
                ))
    
    def _check_naming_conventions(self, file_path: str, lines: List[str]) -> None:
        """Check naming conventions and consistency."""
        
        # Check for inconsistent signal naming
        signal_names = set()
        for i, line in enumerate(lines, 1):
            # Look for signal declarations
            signal_match = re.search(r'logic\s+(?:\[[^\]]+\])?\s*(\w+);', line)
            if signal_match:
                signal_name = signal_match.group(1)
                signal_names.add(signal_name)
                
                # Check naming convention
                if not re.match(r'^[a-z][a-z0-9_]*$', signal_name):
                    self.suggestions.append(OptimizationSuggestion(
                        file_path=file_path,
                        line_number=i,
                        issue_type="Naming Convention",
                        description=f"Signal '{signal_name}' doesn't follow snake_case convention",
                        suggestion="Use snake_case for signal names (e.g., data_valid, clk_enable)",
                        severity="low"
                    ))
    
    def _check_performance_patterns(self, file_path: str, lines: List[str]) -> None:
        """Check for performance-related patterns."""
        
        # Check for hardcoded magic numbers
        for i, line in enumerate(lines, 1):
            magic_matches = self.patterns["hardcoded_values"].findall(line)
            for match in magic_matches:
                self.suggestions.append(OptimizationSuggestion(
                    file_path=file_path,
                    line_number=i,
                    issue_type="Performance",
                    description=f"Hardcoded value '{match}' found",
                    suggestion="Consider using parameters or constants for better maintainability",
                    severity="medium"
                ))
        
        # Check for potential timing issues
        combinational_blocks = 0
        for i, line in enumerate(lines, 1):
            if re.search(r'always_comb', line):
                combinational_blocks += 1
            elif re.search(r'assign\s+\w+\s*=.*\?.*:', line):
                self.suggestions.append(OptimizationSuggestion(
                    file_path=file_path,
                    line_number=i,
                    issue_type="Performance",
                    description="Complex ternary operator in continuous assignment",
                    suggestion="Consider using always_comb block for complex logic",
                    severity="medium"
                ))
    
    def _check_maintainability(self, file_path: str, lines: List[str]) -> None:
        """Check maintainability aspects."""
        
        # Check for repetitive assignment patterns
        assignment_patterns = {}
        for i, line in enumerate(lines, 1):
            assign_match = self.patterns["repetitive_assignments"].search(line)
            if assign_match:
                signal = assign_match.group(1)
                value = assign_match.group(2)
                
                if signal in assignment_patterns:
                    assignment_patterns[signal].append((i, value))
                else:
                    assignment_patterns[signal] = [(i, value)]
        
        # Report signals with many assignments
        for signal, assignments in assignment_patterns.items():
            if len(assignments) > 5:
                self.suggestions.append(OptimizationSuggestion(
                    file_path=file_path,
                    line_number=assignments[0][0],
                    issue_type="Maintainability",
                    description=f"Signal '{signal}' has {len(assignments)} assignments",
                    suggestion="Consider using functions or case statements to reduce repetition",
                    severity="medium"
                ))
    
    def analyze_directory(self, directory: str) -> None:
        """Analyze all SystemVerilog files in a directory."""
        sv_files = []
        for root, dirs, files in os.walk(directory):
            for file in files:
                if file.endswith(('.sv', '.v')):
                    sv_files.append(os.path.join(root, file))
        
        print(f"Analyzing {len(sv_files)} SystemVerilog files...")
        for file_path in sv_files:
            self.analyze_file(file_path)
    
    def generate_report(self, output_format: str = "text") -> str:
        """Generate optimization report."""
        if output_format == "json":
            return self._generate_json_report()
        else:
            return self._generate_text_report()
    
    def _generate_text_report(self) -> str:
        """Generate text format report."""
        if not self.suggestions:
            return "✅ No optimization opportunities found!"
        
        report = []
        report.append("=" * 70)
        report.append("TensorCore Code Optimization Report")
        report.append("=" * 70)
        
        # Group by severity
        by_severity = {"high": [], "medium": [], "low": []}
        for suggestion in self.suggestions:
            by_severity[suggestion.severity].append(suggestion)
        
        # Summary
        total = len(self.suggestions)
        report.append(f"Total Issues Found: {total}")
        report.append(f"  High Priority:   {len(by_severity['high'])}")
        report.append(f"  Medium Priority: {len(by_severity['medium'])}")
        report.append(f"  Low Priority:    {len(by_severity['low'])}")
        report.append("")
        
        # Detailed suggestions
        for severity in ["high", "medium", "low"]:
            if by_severity[severity]:
                report.append(f"{severity.upper()} PRIORITY ISSUES:")
                report.append("-" * 40)
                
                for suggestion in by_severity[severity]:
                    report.append(f"📁 {suggestion.file_path}:{suggestion.line_number}")
                    report.append(f"   Type: {suggestion.issue_type}")
                    report.append(f"   Issue: {suggestion.description}")
                    report.append(f"   💡 {suggestion.suggestion}")
                    report.append("")
        
        # Optimization recommendations
        report.append("OPTIMIZATION RECOMMENDATIONS:")
        report.append("-" * 40)
        
        # Count issue types
        issue_counts = {}
        for suggestion in self.suggestions:
            issue_counts[suggestion.issue_type] = issue_counts.get(suggestion.issue_type, 0) + 1
        
        sorted_issues = sorted(issue_counts.items(), key=lambda x: x[1], reverse=True)
        
        for issue_type, count in sorted_issues:
            report.append(f"• {issue_type}: {count} issues")
            
            if issue_type == "Technical Debt":
                report.append("  → Address TODO comments and incomplete implementations")
            elif issue_type == "Performance":
                report.append("  → Use parameters instead of magic numbers")
                report.append("  → Optimize critical timing paths")
            elif issue_type == "Maintainability":
                report.append("  → Reduce code duplication with functions")
                report.append("  → Improve signal organization")
            elif issue_type == "Code Style":
                report.append("  → Follow consistent formatting guidelines")
                report.append("  → Break long lines for readability")
        
        return "\n".join(report)
    
    def _generate_json_report(self) -> str:
        """Generate JSON format report."""
        import json
        
        data = {
            "summary": {
                "total_issues": len(self.suggestions),
                "high_priority": len([s for s in self.suggestions if s.severity == "high"]),
                "medium_priority": len([s for s in self.suggestions if s.severity == "medium"]),
                "low_priority": len([s for s in self.suggestions if s.severity == "low"])
            },
            "suggestions": [
                {
                    "file": s.file_path,
                    "line": s.line_number,
                    "type": s.issue_type,
                    "description": s.description,
                    "suggestion": s.suggestion,
                    "severity": s.severity
                }
                for s in self.suggestions
            ]
        }
        
        return json.dumps(data, indent=2)
    
    def apply_automatic_fixes(self, file_path: str) -> bool:
        """Apply automatic fixes where possible."""
        try:
            with open(file_path, 'r', encoding='utf-8') as f:
                content = f.read()
            
            original_content = content
            
            # Fix common patterns
            # 1. Add parameter definitions for magic numbers
            content = self._add_parameter_definitions(content)
            
            # 2. Format long lines
            content = self._format_long_lines(content)
            
            # 3. Standardize naming
            content = self._standardize_naming(content)
            
            if content != original_content:
                # Create backup
                backup_path = file_path + ".backup"
                with open(backup_path, 'w', encoding='utf-8') as f:
                    f.write(original_content)
                
                # Write optimized content
                with open(file_path, 'w', encoding='utf-8') as f:
                    f.write(content)
                
                print(f"✅ Applied automatic fixes to {file_path}")
                print(f"   Backup saved as {backup_path}")
                return True
            
            return False
            
        except Exception as e:
            print(f"❌ Error applying fixes to {file_path}: {e}")
            return False
    
    def _add_parameter_definitions(self, content: str) -> str:
        """Add parameter definitions for common magic numbers."""
        # This is a simplified example - real implementation would be more sophisticated
        replacements = {
            "6'd31": "BURST_LENGTH_31",
            "32'h00010000": "BASE_ADDR_C",
            "256/8": "FP32_BYTES_PER_BEAT",
            "128/8": "FP16_BYTES_PER_BEAT",
            "64/8": "INT8_BYTES_PER_BEAT",
            "32/8": "INT4_BYTES_PER_BEAT"
        }
        
        # Add parameter block if not exists
        if "parameter" not in content and any(pattern in content for pattern in replacements.keys()):
            module_match = re.search(r'module\s+\w+\s*#?\s*\(', content)
            if module_match:
                insert_pos = content.find('\n', module_match.end())
                param_block = "\n    // Burst and addressing parameters\n"
                param_block += "    parameter BURST_LENGTH_31 = 6'd31,\n"
                param_block += "    parameter BASE_ADDR_C = 32'h00010000,\n"
                param_block += "    parameter FP32_BYTES_PER_BEAT = 256/8,\n"
                param_block += "    parameter FP16_BYTES_PER_BEAT = 128/8,\n"
                param_block += "    parameter INT8_BYTES_PER_BEAT = 64/8,\n"
                param_block += "    parameter INT4_BYTES_PER_BEAT = 32/8\n"
                
                content = content[:insert_pos] + param_block + content[insert_pos:]
        
        return content
    
    def _format_long_lines(self, content: str) -> str:
        """Format long lines for better readability."""
        lines = content.split('\n')
        formatted_lines = []
        
        for line in lines:
            if len(line) > 100 and '=' in line:
                # Try to break assignment lines
                parts = line.split('=', 1)
                if len(parts) == 2:
                    indent = len(line) - len(line.lstrip())
                    formatted_lines.append(parts[0].rstrip() + ' =')
                    formatted_lines.append(' ' * (indent + 4) + parts[1].lstrip())
                else:
                    formatted_lines.append(line)
            else:
                formatted_lines.append(line)
        
        return '\n'.join(formatted_lines)
    
    def _standardize_naming(self, content: str) -> str:
        """Standardize naming conventions."""
        # This is a placeholder - real implementation would be more comprehensive
        return content

def main():
    """Main function for command-line interface."""
    parser = argparse.ArgumentParser(description="TensorCore Code Optimization Tool")
    parser.add_argument("path", help="File or directory to analyze")
    parser.add_argument("--format", choices=["text", "json"], default="text",
                       help="Output format")
    parser.add_argument("--fix", action="store_true",
                       help="Apply automatic fixes where possible")
    parser.add_argument("--severity", choices=["high", "medium", "low"], 
                       help="Filter by severity level")
    
    args = parser.parse_args()
    
    optimizer = SystemVerilogOptimizer()
    
    if os.path.isfile(args.path):
        optimizer.analyze_file(args.path)
        if args.fix:
            optimizer.apply_automatic_fixes(args.path)
    elif os.path.isdir(args.path):
        optimizer.analyze_directory(args.path)
    else:
        print(f"Error: {args.path} is not a valid file or directory")
        return
    
    # Filter by severity if specified
    if args.severity:
        optimizer.suggestions = [s for s in optimizer.suggestions if s.severity == args.severity]
    
    # Generate and print report
    report = optimizer.generate_report(args.format)
    print(report)

if __name__ == "__main__":
    main()