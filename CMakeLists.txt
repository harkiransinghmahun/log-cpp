cmake_minimum_required(VERSION 4.0)
project(Log)

set(CMAKE_CXX_STANDARD 20)

# Add in include directory
include_directories(include)

# Collect all source files that needs to be compiled and set it as a variable
file(GLOB SRC_FILES src/*.cpp)

# Needs to come before we link target with libraries
add_executable(Log ${SRC_FILES})