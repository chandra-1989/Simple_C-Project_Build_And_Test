cmake_minimum_required(VERSION 3.16)
project(compress CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


add_library(compress compress.cpp main.cpp)
target_link_libraries(compress ZLIB::ZLIB)
target_include_directories(compress PUBLIC include)