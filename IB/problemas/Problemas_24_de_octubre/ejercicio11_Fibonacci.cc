/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file  Fibonacci.cc
 * @author Marco Aguiar Álvarez
 * @date Oct 15 2023
 * @brief Prints the firts N numbers of the Fibonacci sequence
 *
 *
 */ 

#include <iostream>

int main () {
  int numero1{0};
  int numero2{1};
  int termino_siguiente, numero_de_terminos;
  std::cout << "¿Cuantos terminos de la serie de Fibonacci desea calcular? ";
  std::cin >> numero_de_terminos;
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
