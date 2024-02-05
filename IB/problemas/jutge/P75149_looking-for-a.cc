/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @autor Marco Aguiar Álvarez 
 * @date 28/11/2023
 * @brief Este archivo contiene la implementación de las funciones declaradas en tools.h
 */ 

#include <iostream>
#include <string>


int main () {
  char caracter;
  bool encontrado = false;

  while (std::cin >> caracter && caracter != '.') {
    if (caracter == 'a') {
      encontrado = true;
      break;
    }
  }
  if (encontrado) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
}