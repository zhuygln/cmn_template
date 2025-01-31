cmake_minimum_required(VERSION 3.15)
project(
  arima_test_project
  VERSION 0.1.0
  LANGUAGES CXX)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Conan setup: Include the generated Conan toolchain
include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake)

# Add the source files
set(SOURCE_FILES src/arima.cpp)
set(TEST_FILES src/test_arima.cpp)

# Add executable for testing
add_executable(test_arima ${TEST_FILES} ${SOURCE_FILES})

# Link dependencies (Armadillo and Google Test)
find_package(Armadillo REQUIRED)
find_package(GTest REQUIRED)
target_link_libraries(test_arima PRIVATE armadillo GTest::GTest GTest::Main)

# Enable testing
enable_testing()

# Add Google Test
add_test(NAME ARIMA_Test COMMAND test_arima)
