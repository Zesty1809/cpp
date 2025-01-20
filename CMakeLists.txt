cmake_minimum_required(VERSION 3.31)

# Project Name
project(SdlPlatformer VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

# Set C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the src directory
add_subdirectory(src)
