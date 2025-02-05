# Revenue Management Solutions Template

This is a template for revenue management solutions. It uses Python with C++ extensions.

## Features

- Development Container in Linux (Ubuntu 22.04)
- Poetry for Python dependency management
- Conan for C++ dependency management
- Meson build system
- Tox for testing for google python style
- Suggested C++ libraries for time series analysis and forecasting in [openSourceliblist](openSourceliblist)


## Prerequisites

- WSL2
- Docker
- VSCode
- [Dev Containers Extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers) for VSCode

## Getting Started

1. Clone the repository:
```bash
git clone https://github.com/yourusername/revenue-management-solutions-template.git
```

2. Start Docker:
```bash
sudo service docker start
```

To verify Docker is running:
```bash
docker ps
```
If you see no `Error response`, Docker is running. Otherwise, start it using the command above.

3. Open the project:
```bash
code .
```

4. Build and run the container:
   - Open the command palette (Ctrl+Shift+P or Cmd+Shift+P)
   - Select: `Dev Containers: Rebuild and Reopen in container`

## Proof of Concept Projects

### Python Wrapper for Existing C Libraries in G3
We have exsiting C libraries in G3, we want to wrap them in python to be used in tk python wrapper. This is a proof of concept to show how to wrap existing C libraries in python. For more details, see project [python_wrapper_rmpo_tk](https://gitlab.sas.com/yozhuz/python_wrapper_rmpo_tk).

### Python with c++ extension using pybind11
This is a proof of concept to show how to use pybind11 to wrap C++ code to be used in python. For more details, see project [pybind11_example](https://gitlab.sas.com/yozhuz/pybind11_example).

Tag: `pybind11` `scikit-build-core` `cmake`

### Python with pure c extension

Tag: `cython`

# FAQ

## How this project is working with tk python wrapper in G3?
By the end of 2024, tk python wrapper use ctypes to for python binding. This project with scikit-build-core to build the c++ code and generate the python binding.  scikit-build-core can work with ctypes when building shared libraries. The ctypes module in Python allows loading and calling functions from shared libraries (.so files on Linux, .dll on Windows, .dylib on macOS). If your project uses ctypes to load compiled C/C++ code, you can configure scikit-build-core to build the required shared libraries.
