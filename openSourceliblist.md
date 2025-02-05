# C++ Libraries for Time Series Analysis and Forecasting

This document lists recommended open-source C++ libraries for time series analysis and forecasting, categorized by their primary functionality. The libraries are selected based on their popularity, documentation, and community support.

## General Notes
- This list is not complete and will be updated as it's reviewed by the team
- All listed libraries are actively maintained as of 2024
- Consider compilation time and dependencies when selecting libraries
- Check compatibility with your project's license requirements
- Evaluate documentation quality and community support before adoption

## Approved SAS Libraries
SAS has a list of C++ open-source libraries approved for use. Check this [link](https://go.documentation.sas.com/doc/en/pgmsascdc/9.4_3.5/lrcon/n0003449198.htm) for more details.

**TODO:** We need to check if this policy is applicable to our team.

## Approved Utility Libraries
- **Boost**
  - General-purpose, peer-reviewed library collection
  - License: Boost Software License

- **TBB (Intel Threading Building Blocks)**
  - Parallel programming library
  - Available with Intel compiler (LAX, WX6, Mac)
  - Open source version available for additional platforms
  - License: Check before use

- **LibTorch (PyTorch C++)**
  - Dynamic computational graphs
  - Excellent for research and prototyping
  - Strong GPU support
  - License: BSD-style

- **Google Test**
  - Unit testing framework
  - License: BSD 3-Clause

- **libonnx**
  - C++ library for ONNX
  - License: MIT

## More Libraries not in the approved list
### Linear Algebra Libraries
- **Armadillo**
  - High-performance linear algebra library
  - Excellent for matrix operations in time series
  - Integration with LAPACK and BLAS
  - License: Apache 2.0

- **Eigen**
  - Template-based linear algebra library
  - Header-only implementation
  - Extensive documentation and active community
  - License: Mozilla Public License 2.0

### Statistical Time Series Models: ARIMA, SARIMA, and ETS Implementation Libraries
- **dlib**
  - Comprehensive machine learning library with time series capabilities
  - Includes statistical models for forecasting
  - Well-maintained with extensive documentation
  - License: Boost Software License

- **TSA**
  - Specialized time series analysis library
  - Features: ARIMA, SARIMA, and related models
  - Lightweight and focused implementation
  - Best for projects requiring pure time series functionality

### Probabilistic Programming
- **Stan**
  - Robust Bayesian inference
  - MCMC sampling methods
  - Uncertainty quantification
  - License: BSD 3-Clause

- **BayesLoop**
  - Specialized for time series
  - Bayesian parameter estimation
  - Online learning capabilities
  - License: MIT

### Neural Network Libraries
- **TensorFlow C++ API**
  - Full deep learning framework
  - Supports: RNN, LSTM, TCN
  - GPU acceleration support
  - Production-ready deployment
  - License: Apache 2.0