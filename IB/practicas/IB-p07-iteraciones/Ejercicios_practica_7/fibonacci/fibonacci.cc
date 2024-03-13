/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file  Fibonacci.cc
 * @author Marco Aguiar Álvarez
 * @date 25 10 23
 * @brief Prints the firts N numbers of the Fibonacci sequence
 *
 *
 */ 

#include <iostream>
#include <cstdlib>
#include "fibonacci.h" 

int main (int argc, char* argv[]) {
	PrintProgramPorpouse();
	if (!CheckCorrectParameters(argc, argv, 2)) {
		return 345;
	}
	int numero1{0}, numero2{1};
  int numero_de_terminos, termino_siguiente;
  numero_de_terminos = std::atoi(argv[1]);
  std::cout << "Los primeros " << numero_de_terminos << " de la susesion de Fibonacci son: "; 
  for (int i = 0; i <= numero_de_terminos; i++) {
    if (i <= 1) {
      termino_siguiente = i;  
    } else {
      termino_siguiente = numero1 + numero2;
      numero1 = numero2;
      numero2 = termino_siguiente;
    }   
  std::cout << termino_siguiente << " ";
  }
  std::cout << std::endl;
  return 0;
}
