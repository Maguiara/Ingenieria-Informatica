/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Aguiar Álvarez
 * @date Oct 15 2023
 * @brief This program prints the lowercase letter 
 *        corresponding to a given uppercase letter.
 *
 */
 
#include <iostream> 

int main () { 

  char LetraMayuscula;
  char  LetraMinuscula; 
  std::cout << "Introduzca una letra mayuscula" << std::endl; 
    std::cin >> LetraMayuscula;
  if (LetraMayuscula >= 'A' && LetraMayuscula <= 'Z') {
    static_cast<int>(LetraMayuscula);
    LetraMinuscula = LetraMayuscula + 32;
    
    std::cout << " La letra minuscula correspondiente es " << LetraMinuscula << std::endl; 
  }  
  else { 
    std::cout << "La entrada no es una letra mayuscula " << std::endl;
  }
  return 0;
}  
