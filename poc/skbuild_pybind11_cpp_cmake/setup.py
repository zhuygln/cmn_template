from skbuild import setup

setup(
    name="skbuild_pybind11_cpp_cmake",
    version="0.1.0",
    description="a minimal example package (with pybind11)",
    author="Yonglin Zhu",
    license="MIT",
    packages=["hello"],
    package_dir={"": "src"},
    cmake_install_dir="src/hello",
    python_requires=">=3.9",
)
