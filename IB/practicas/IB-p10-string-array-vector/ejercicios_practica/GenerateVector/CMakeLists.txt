# @date Nov 9, 2022
# @brief CMakeLists.txt simple example. You can use this as a template for your projects
#        This does not generate documentation
#        It doesn't build any library
# CMakeLists.txt defines the whole build
# CMake reads CMakeLists.txt sequentially
#
# Build process:
#   1. cd <project_folder>
#   2. mkdir build
#   3. cd build
#   4. cmake ..
#   5. make

cmake_minimum_required(VERSION 3.1)  # Mandatory

# set the project name 
project(generate_vector                # Mandatory
    VERSION 1.0 
    DESCRIPTION "A simple CMake project for the Generate Vector application"
    LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)            # Use c++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic -Weffc++")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)

# Adds an executable target called "generate_vector" to be built from the source files listed in the command invocation.
add_executable(generate_vector
    src/tools.h
    src/tools.cc
    src/generate_vector.h
    src/generate_vector.cc
    src/generate_main.cc)

# Add expected compiler features to a target.
target_compile_features(generate_vector PRIVATE cxx_std_17)

# Add compile options to a target.
target_compile_options(generate_vector PRIVATE -Wall -Wextra -Wpedantic -Weffc++)

