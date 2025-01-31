# FAQ

## How this project is working with tk python wrapper in G3?
by the end of 2024, tk python wrapper use ctypes to for python binding. This project with scikit-build-core to build the c++ code and generate the python binding.  scikit-build-core can work with ctypes when building shared libraries. The ctypes module in Python allows loading and calling functions from shared libraries (.so files on Linux, .dll on Windows, .dylib on macOS). If your project uses ctypes to load compiled C/C++ code, you can configure scikit-build-core to build the required shared libraries.
