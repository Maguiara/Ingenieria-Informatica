##
 # Universidad de La Laguna
 # Escuela Superior de Ingeniería y Tecnología
 # Grado en Ingeniería Informática
 # Informática Básica
 # 
 # @author Marco Aguiar Álvarez @alu0101620961@ull.edu.es
 # @date 27 Nov 2023
 # @brief Fichero con la definicion de las funciones para el main


cmake_minimum_required(VERSION 3.1)
 
# project name
project(Operaciones
    VERSION 1.0
    DESCRIPTION "Programa que lee un fichero de texto y realiza operaciones"
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
add_executable(Operaciones
    src/tools.h
    src/tools.cc
    src/Operaciones.cc
    src/Operaciones.h
    src/Operaciones_main.cc
    )

# caracteres del compilador 
target_compile_features(Operaciones PRIVATE cxx_std_17)

# añadir opciones de compilacion
target_compile_options(Operaciones PRIVATE -Wall -Wextra -Wpedantic -Weffc++)
