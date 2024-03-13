  cmake_minimum_required(VERSION 3.1)
 
  # project name
  project(Guay
      VERSION 1.0
      DESCRIPTION 
      LANGUAGES CXX )
  
  # C++ standard
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED True)
  
  # Guaypeta donde se guardan los ejecutables
  set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
  
  # Debug and Release flags
  set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic -Weffc++")
  set(CMAKE_CXX_FLAGS_RELEASE "-O3 ")
  
  # Donde buscar los archivos de cabecera *.h
  include_directories(${PROJECT_SOURCE_DIR}/src)
  
  # target executable
  add_executable(Guay
      src/Guay.cc
      src/Guay.h
      src/Guay_main.cc
      )
  
  # caracteres del compilador 
  target_compile_features(Guay PRIVATE cxx_std_17)
  
  # añadir opciones de compilacion
  target_compile_options(Guay PRIVATE -Wall -Wextra -Wpedantic -Weffc++)