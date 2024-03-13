/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file mayuscula_minuscula.cc
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es 
 * @date 18 10 2023
 * @brief  If you input a lowercase character,
 *         this program will print the uppercase and viceverse
 *
 * @see http://www.cplusplus.com/doc/tutorial/program_structure/
 * @see http://cpp.sh/2dd
 */

#include <iostream> 

int main () {
  char caracter1;
  std::cout << "Ingrese su caracter" << std::endl;
  std::cin >> caracter1; 
  if ( caracter1 >= 'A' && caracter1 <= 'Z') {
    char minuscula = caracter1 + 32; 
    std::cout << "La letra minúscula es " << minuscula << std::endl; 
  } else if ( caracter1 >= 'a' && caracter1 <= 'z') { 
    char mayuscula = caracter1 - 32;
    std::cout << "La letra mayúscula es " << mayuscula  << std::endl; 
  }
  return 0; 
}
