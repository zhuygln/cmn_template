# Project configuration
project('arima_test_project', 'cpp', 
  version : '0.1.0',
  default_options : ['cpp_std=c++11'])

# Specify dependency directories from Conan
armadillo_dep = dependency('armadillo', required : true)
gtest_dep = dependency('gtest', required : true)

# Source files
test_sources = ['src/test_arima.cpp', 'src/arima.cpp']

# Define the test executable
test_exe = executable('test_arima',
  test_sources,
  dependencies : [armadillo_dep, gtest_dep])

# Define the test
test('ARIMA Model Test', test_exe)
