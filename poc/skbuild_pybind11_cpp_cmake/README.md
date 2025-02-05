# Python-C++ Integration with Pybind11 and Scikit-build

This project demonstrates how to create Python bindings for C++ code using modern build tools. It provides a template for building high-performance C++ extensions that can be easily imported (.so files from linux build) into Python projects.

## 🚀 Quick Start

```bash
# Install the package
pip install .

# Test the installation
python -c "import hello; hello.hello()"  # Should print "Hello, World!"
```

If you still encounter issues, you can try:
1. Check if the package was installed correctly:
```bash
pip list | grep hello
```
2. Verify the build directory exists:
```bash
ls -l _skbuild
```
3. If problems persist, you can try cleaning and rebuilding:
```bash
rm -rf _skbuild build dist
pip install -e .
```

## 🛠️ Technology Stack

### Core Technologies
- **scikit-build** (≥0.13)
  - Modern Python build system
  - Seamless CMake integration
  - Uses setuptools as build backend
  - Handles complex build configurations

- **pybind11** (2.10.4)
  - Header-only library for C++/Python bindings
  - Automatic Python reference counting
  - Modern C++ support (11/14/17)
  - Efficient type conversions

- **CMake** (≥3.15)
  - Build system configuration
  - Dependency management
  - Cross-platform support

### Build Tools
- **ninja**: Fast, lightweight build system
- **setuptools**: Python package build backend
- **pip** (≥10.0): Package installer

## 📁 Project Structure
```
.
├── CMakeLists.txt          # CMake configuration
├── setup.py                # Python build configuration
├── src/
│   └── hello/
│       ├── hello_py.cpp    # C++ source with Python bindings
│       └── CMakeLists.txt  # Module-specific CMake config
└── tests/                  # Test directory
```

## 🔧 Development Setup

### Prerequisites
1. Install build tools:
```bash
pip install scikit-build cmake ninja setuptools
```

2. Ensure you have a modern C++ compiler:
   - GCC (≥5.4)
   - Clang (≥3.3)
   - MSVC (≥14.0/Visual Studio 2015)

### Building from Source
```bash
# Clone the repository
git clone <repository-url>
cd skbuild_pybind11_cpp_cmake

# Install in development mode
pip install -e .

# Run tests
tox
```

## 🧪 Testing
Testing is managed by tox, which creates isolated environments for testing:

```bash
# Run all tests
tox

# Run specific Python version
tox -e py310
```
## TODO: 
- [ ] Add switch to poetry to build the package


## 👤 Author
Yonglin Zhu

## 📄 License
[Add your license information here]

