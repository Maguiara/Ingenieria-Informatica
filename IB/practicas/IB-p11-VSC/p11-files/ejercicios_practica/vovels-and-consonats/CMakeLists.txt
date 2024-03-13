# @date 27 Nov 23
# @brief Programa Cmake que se encarga de crear el makefile para el proyecto del primer ejericio de la practia
# 
# Build process: 
# 1) cd <carpeta_del_proyecto>
# 2) mkdir build
# 3) cd build
# 4) cmake ..
# 5) make

cmake_minimum_required(VERSION 3.1)
    
# project name
project(vowels-consonants
    VERSION 1.0
    DESCRIPTION "Programa que cuenta las vocales y consonantes de un texto"
    LANGUAGES CXX )

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Carpeta donde se guardan los ejecutables
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

# Debug and Release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic -Weffc++")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 ")

# Donde buscar los archivos de cabecera *.h
include_directories(${PROJECT_SOURCE_DIR}/src)

# target executable
add_executable(vowels-consonants
    src/tools.h
    src/tools.cc
    src/vowels-consonats.cc
    src/vowels-consonats.h
    src/vowels-consonats_main.cc
    )

# caracteres del compilador 
target_compile_features(vowels-consonants PRIVATE cxx_std_17)

# añadir opciones de compilacion
target_compile_options(vowels-consonants PRIVATE -Wall -Wextra -Wpedantic -Weffc++)
