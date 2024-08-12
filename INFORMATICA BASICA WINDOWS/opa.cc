/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P42042.cc
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es 
 * @date 24 10 2023
 * @brief  Pritns if the letter is uppercase or lowercase and if it's a consonant or not.
 *
 * @see http://www.cplusplus.com/doc/tutorial/program_structure/
 * @see http://cpp.sh/2dd
 */

#include <iostream>

int main () {
  int numero;
  std::cin >> numero;
  if (numero != 0 ) {
    int longitud = 0;
    int numero_auxiliar = numero;
    while ( numero_auxiliar > 0 ) {
      numero_auxiliar /= 10; 
      longitud++;
    }
    for (int i = 0; i < longitud; i++) { // Bucle para cuando se introduzca un numero como 1000 se imprima con todos los 0 a la izq
      int digito = numero % 10;
      std::cout << digito;
      numero /= 10;
    }
    std::cout << std::endl;
  } else { 
  std::cout << numero << std::endl;
  }
  return 0;
} 