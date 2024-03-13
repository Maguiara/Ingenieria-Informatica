/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file converidor.cc
 * @author Marco Aguiar Álvarez
 * @date 18 10 2023
 * @brief This program converts any given time into seconds.
 *
 */
 
#include <iostream> 

int main () { 

  int anyos, dias,  horas, minutos, segundos;
  std::cout << "Ingrese la cantidad de años, horas, minutos, segundos que desee: " << std::endl;
  std::cin >> anyos >> dias >> horas >> minutos >> segundos; 
  int segundos_totales = ( anyos * 31536000 ) + ( dias * 86400) + ( horas * 3600 ) + ( minutos * 60 ) + segundos;
  std::cout << "La cantidad ingresada equivalen a " << segundos_totales << " segundos" << std::endl; 
  return 0; 
} 
