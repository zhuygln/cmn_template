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
https://scikit-build-core.readthedocs.io/en/latest/getting_started.html

### NOTE
In this example, c extension need to implemented for the python packaging, not pure c with can that can run standalone.