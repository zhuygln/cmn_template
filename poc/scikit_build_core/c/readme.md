# scikit-build-core C Extension Example

This project demonstrates how to build a Python package with a C extension using scikit-build-core. It serves as a simple example of integrating C code with Python using a modern build system.

## Project Structure

- `pyproject.toml`: Defines the project metadata and build system requirements.
- `CMakeLists.txt`: CMake configuration file for building the C extension.
- `skcdpure.c`: C source code for the extension module.
- `.gitignore`: Specifies intentionally untracked files to ignore.

## Features

- Demonstrates the use of scikit-build-core as a build backend.
- Implements a simple C extension that prints a greeting message.
- Shows how to set up CMake for building the extension.

## Requirements

- Python 3.9 or higher
- scikit-build-core (automatically installed by the build system)

## Building the Project

To build the project, you have two options:

1. Using `pipx`:
   ```
   pipx run build
   ```
   This allows you to install and run Python applications in isolated environments.

2. Installing directly (preferably in a virtual environment):
   ```
   pip install .
   ```

That's all you need for a basic package with a C extension!

## More about scikit-build-core

[scikit-build-core](https://scikit-build-core.readthedocs.io/en/latest/) is a build backend for Python packages with C extensions. It provides a seamless integration between Python's build system and CMake, making it easier to develop and distribute Python packages with compiled extensions.

Key features of scikit-build-core include:
- Automatic CMake configuration and build process
- Support for various C/C++ compilers and build tools
- Integration with Python's packaging ecosystem (pip, setuptools, etc.)
- Cross-platform compatibility

For more detailed information and usage guidelines, refer to the [official documentation](https://scikit-build-core.readthedocs.io/en/latest/getting_started.html).

### NOTE
This example demonstrates a Python package with a C extension, not a standalone C program. The C code is compiled into a shared library that can be imported and used within Python. This approach allows you to leverage the power of C while maintaining the flexibility and ease of use of Python.