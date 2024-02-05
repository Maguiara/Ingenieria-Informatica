/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file  divisores_de_numero_introducido.cc
 * @author Marco Aguiar Álvarez
 * @date Oct 15 2023
 * @brief This program determinates all the 
 *        numbers can divide our input number
 *        
 *
 */ 

#include <iostream>

void CalcularLosDivisores(int dividendo) {
  for ( int i = 1; i <=dividendo; i++) {
    if ( dividendo % i == 0 ) { 
      std::cout << i << " "; 
    }
  }
  std::cout << std::endl;
}

int main () {
  int numero1;
  std::cout << "Introduzca un numero: " << std::endl;
  std::cin >> numero1;
  CalcularLosDivisores (numero1);
  return 0;
}
