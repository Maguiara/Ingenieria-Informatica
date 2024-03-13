/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P34279_add-one-second.cc
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es 
 * @date 23 10 2023
 * @brief If you input an hour this program imputs that hour + 1 second.
 *
 * @see http://www.cplusplus.com/doc/tutorial/program_structure/
 * @see http://cpp.sh/2dd
 */

#include <iostream>

int main () {
  int horas, minutos, segundos;
  std::cin >> horas >> minutos >> segundos; 

  segundos++;
  if (segundos == 60) {
    segundos = 0; 
    minutos++; 
  	if (minutos == 60) {
    	minutos = 0;
      horas++;
    	if (horas == 24) {
      	horas = 0;
      }
    }
  }

  if (horas < 10){
    std::cout << "0" << horas;
  } else {
    std::cout << horas;
  }
  if (minutos < 10) {
    std::cout << ":0" << minutos;
  } else {
    std::cout << ":" << minutos;
  }
  if (segundos < 10) {
    std::cout << ":0" << segundos << std::endl;
  } else {
    std::cout << ":" << segundos << std::endl;
  }
}
