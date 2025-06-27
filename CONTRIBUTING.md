# Contributing to TensorCore

Thank you for your interest in contributing to the TensorCore hardware accelerator project! This document provides guidelines and information for contributors.

## 🚀 Getting Started

### Prerequisites
- Verilator (>= 4.0) for RTL simulation
- GCC/Clang with C++17 support
- Python 3.7+ with NumPy
- Make build system
- Git for version control

### Development Setup
```bash
# Clone the repository
git clone https://github.com/JinMaimagine/tensorcore.git
cd tensorcore

# Test the build system
cd rtl/verilator
make help
make compile
make test
```

## 📋 Development Guidelines

### Code Style

#### SystemVerilog RTL Code
- Use consistent indentation (4 spaces)
- Follow naming conventions:
  - Modules: `snake_case` (e.g., `tensorcore_top`)
  - Signals: `snake_case` (e.g., `axi_out_valid`)
  - Parameters: `UPPER_CASE` (e.g., `ARRAY_SIZE`)
  - Packages: `snake_case_pkg` (e.g., `tensorcore_pkg`)

```systemverilog
// Good example
module processing_element #(
    parameter PE_ID = 0,
    parameter DATA_WIDTH = 32
)(
    input  logic                    clk,
    input  logic                    rst_n,
    input  logic [DATA_WIDTH-1:0]   data_in,
    output logic [DATA_WIDTH-1:0]   data_out
);
```

#### C++ Testbench Code
- Follow C++17 standards
- Use meaningful variable names
- Add comments for complex algorithms
- Use RAII principles

```cpp
// Good example
class TensorCoreTestbench {
private:
    std::unique_ptr<Vtensorcore> dut_;
    VerilatedVcdC* trace_;
    
public:
    explicit TensorCoreTestbench(const std::string& trace_file);
    void run_test(const TestVector& test_data);
};
```

#### Python Scripts
- Follow PEP 8 style guide
- Use type hints where appropriate
- Add docstrings for functions and classes

```python
def process_matrix_data(
    data: np.ndarray, 
    data_type: str, 
    precision: int
) -> np.ndarray:
    """Process matrix data for TensorCore input.
    
    Args:
        data: Input matrix data
        data_type: Data type ('fp32', 'fp16', 'int8', 'int4')
        precision: Bit precision
        
    Returns:
        Processed matrix data ready for hardware
    """
```

### Commit Guidelines

#### Commit Message Format
```
<type>(<scope>): <description>

[optional body]

[optional footer]
```

#### Types
- `feat`: New feature
- `fix`: Bug fix
- `docs`: Documentation changes
- `style`: Code style changes (formatting, etc.)
- `refactor`: Code refactoring
- `test`: Adding or updating tests
- `perf`: Performance improvements
- `build`: Build system changes

#### Examples
```
feat(systolic): add support for INT4 precision
fix(axi): resolve burst length calculation error
docs(readme): update build instructions
test(pe): add comprehensive PE unit tests
```

## 🧪 Testing

### Running Tests
```bash
# Run all tests
cd rtl/verilator
make test

# Run specific configuration
make compile CONFIG=release PRECISION=mixed
make run

# Run regression tests
make regression

# Lint RTL code
make lint
```

### Adding New Tests
1. Create test vectors in `dataprocess/`
2. Add C++ testbench in `rtl/verilator/`
3. Update Makefile if needed
4. Ensure tests pass in CI

### Test Coverage
- Unit tests for individual modules
- Integration tests for full system
- Corner case testing (overflow, underflow)
- Performance regression tests

## 🏗️ Architecture Guidelines

### Adding New Features

#### New Data Types
1. Update `para_pkg.sv` with new type definitions
2. Modify MAC units to support new precision
3. Update address generation logic
4. Add test vectors and verification
5. Update documentation

#### New Matrix Shapes
1. Add shape definition to `params::shape_t`
2. Update systolic array configuration
3. Modify address generation patterns
4. Add corresponding test cases

#### Performance Optimizations
1. Profile current implementation
2. Identify bottlenecks
3. Implement optimization
4. Verify functionality is preserved
5. Measure performance improvement

### Design Principles
- **Modularity**: Keep modules focused and reusable
- **Parameterization**: Use parameters for configurability
- **Documentation**: Comment complex logic thoroughly
- **Verification**: Test all new functionality

## 📝 Documentation

### Code Documentation
- Add module headers with functionality description
- Comment complex algorithms and state machines
- Document interface protocols
- Include timing diagrams for critical paths

### User Documentation
- Update README.md for new features
- Add examples for new functionality
- Update build instructions if needed
- Create architecture diagrams

## 🐛 Bug Reports

### Before Reporting
1. Check existing issues
2. Reproduce the bug consistently
3. Test with latest code
4. Gather relevant information

### Bug Report Template
```markdown
**Bug Description**
Clear description of the bug

**Steps to Reproduce**
1. Step one
2. Step two
3. Step three

**Expected Behavior**
What should happen

**Actual Behavior**
What actually happens

**Environment**
- OS: [e.g., Ubuntu 20.04]
- Verilator version: [e.g., 4.106]
- Compiler: [e.g., GCC 9.4.0]

**Additional Context**
Any other relevant information
```

## 🚀 Feature Requests

### Feature Request Template
```markdown
**Feature Description**
Clear description of the proposed feature

**Motivation**
Why is this feature needed?

**Proposed Implementation**
How should this be implemented?

**Alternatives Considered**
Other approaches considered

**Additional Context**
Any other relevant information
```

## 📋 Pull Request Process

### Before Submitting
1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Test thoroughly
5. Update documentation
6. Ensure CI passes

### Pull Request Template
```markdown
**Description**
Brief description of changes

**Type of Change**
- [ ] Bug fix
- [ ] New feature
- [ ] Performance improvement
- [ ] Documentation update
- [ ] Code refactoring

**Testing**
- [ ] Unit tests pass
- [ ] Integration tests pass
- [ ] Manual testing completed
- [ ] Performance impact assessed

**Checklist**
- [ ] Code follows style guidelines
- [ ] Self-review completed
- [ ] Documentation updated
- [ ] No breaking changes (or documented)
```

### Review Process
1. Automated CI checks must pass
2. Code review by maintainers
3. Address feedback
4. Final approval and merge

## 🏆 Competition Guidelines

### For 集创赛中科芯杯
- Focus on innovation and performance
- Document design decisions clearly
- Provide comprehensive verification
- Include performance analysis
- Follow competition requirements

### Submission Preparation
1. Clean up TODO items
2. Optimize performance
3. Complete documentation
4. Prepare demonstration
5. Create presentation materials

## 📞 Getting Help

### Communication Channels
- GitHub Issues: Bug reports and feature requests
- GitHub Discussions: General questions and ideas
- Email: [Maintainer contact information]

### Resources
- [SystemVerilog IEEE Standard](https://ieeexplore.ieee.org/document/8299595)
- [Verilator Documentation](https://verilator.org/guide/latest/)
- [AXI4 Protocol Specification](https://developer.arm.com/documentation/ihi0022/latest/)

## 📄 License

By contributing to this project, you agree that your contributions will be licensed under the same license as the project (MIT License).

---

Thank you for contributing to TensorCore! Your efforts help make this project better for everyone.