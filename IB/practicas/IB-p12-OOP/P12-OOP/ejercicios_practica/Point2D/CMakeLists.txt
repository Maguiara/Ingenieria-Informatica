 
  cmake_minimum_required(VERSION 3.1)
 
  # project name
  project(point2D
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
  add_executable(point2D
      src/point2D.cc
      src/point2D.h
      src/point2D_main.cc
      )
  
  # caracteres del compilador 
  target_compile_features(point2D PRIVATE cxx_std_17)
  
  # añadir opciones de compilacion
  target_compile_options(point2D PRIVATE -Wall -Wextra -Wpedantic -Weffc++)
