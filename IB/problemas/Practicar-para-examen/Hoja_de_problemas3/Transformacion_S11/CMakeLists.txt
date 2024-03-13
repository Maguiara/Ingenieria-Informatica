cmake_minimum_required(VERSION 3.1)
 
  # project name
  project(transformado
      VERSION 1.0
      DESCRIPTION 
      LANGUAGES CXX )
  
  # C++ standard
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED True)
  
  # transformadopeta donde se guardan los ejecutables
  set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
  
  # Debug and Release flags
  set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic -Weffc++")
  set(CMAKE_CXX_FLAGS_RELEASE "-O3 ")
  
  # Donde bustransformado los archivos de cabecera *.h
  include_directories(${PROJECT_SOURCE_DIR}/src)
  
  # target executable
  add_executable(transformado
      src/transformado.cc
      src/transformado.h
      src/transformado_main.cc
      )
  
  # transformadoacteres del compilador 
  target_compile_features(transformado PRIVATE cxx_std_17)
  
  # añadir opciones de compilacion
  target_compile_options(transformado PRIVATE -Wall -Wextra -Wpedantic -Weffc++)