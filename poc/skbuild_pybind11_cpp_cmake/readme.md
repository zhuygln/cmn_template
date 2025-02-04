# Hello Pybind11 with Scikit-build

This is a proof-of-concept project demonstrating the integration of:
- scikit-build (modern Python build system)
- pybind11 (C++/Python bindings)
- cmake (build system)

Note: Based on [hello-pybind11](https://github.com/scikit-build/scikit-build-sample-projects/tree/main/projects/hello-pybind11)

## Building

To build, you must have pip 10 or greater, *or* you need to manually install
`scikit-build` and `cmake`. Once you create a wheel, that wheel can be used in
earlier versions of pip.

Example build and install sequence:

```bash
pip install .
python3.10 -c "import hello; hello.hello()"
```

This should print "Hello, World!".

## Testing

Testing is managed by tox. This will build the package in a temp directory and runs the tests in the test dir.

```shell
tox
```

## Tech Stack

### scikit-build
- Modern build system for Python packages
- Provides seamless CMake integration
- Handles complex build configurations
- Better development experience than traditional setuptools
- Uses setuptools as build backend

### pybind11
- Header-only library for creating Python bindings for C++ code
- Automatic handling of Python reference counting
- Support for C++11/14/17 features
- Easy conversion between Python and C++ types
- Version 2.10.4 (automatically fetched during build)

## Purpose
This project serves as a template/example for creating Python extensions using C++ with a modern build system. It's particularly useful for:
- High-performance computing modules
- Wrapping existing C++ libraries for Python
- Creating Python extensions with minimal boilerplate

## Requirements
- A C++ compiler
- CMake (version 3.15 or higher)
- Python 3.9+
- scikit-build (>=0.13)
- pybind11 (automatically downloaded)
- ninja
- setuptools

## Build System
The project uses:
- scikit-build for build system integration
- setuptools as the build backend
- CMake (3.15-3.26) for C++ compilation configuration
- ninja as the build tool
- FetchContent for automatic dependency management

## Project Structure
- Name: skbuild_pybind11_cpp_cmake
- Version: 0.1.0
- Main module: _hello (built from src/hello/hello_py.cpp)
- Package directory: src/hello
- Author: Yonglin Zhu

