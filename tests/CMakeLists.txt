cmake_minimum_required(VERSION 3.16)
project(compression_test CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#find_package(GTest REQUIRED)
add_executable(compression_test test_compressor.cpp)

target_link_libraries(compression_test
 PRIVATE
  GTest::GTest
  compress)

add_test(compression_gtests compression_test)