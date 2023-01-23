cmake_minimum_required(VERSION 3.16)
project(CompressionTest LANGUAGES CXX)

find_package(ZLIB REQUIRED)
find_package(GTest REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)