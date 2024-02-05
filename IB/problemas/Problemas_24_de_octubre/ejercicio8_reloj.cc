/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file  reloj.cc
 * @author Marco Aguiar Álvarez
 * @date Oct 15 2023
 * @brief This program prints what hour is going to be 
 *        after an X hours
 *        
 *
 */ 

#include <iostream>

int CalcularLaSumaDeLaHora(int hora_actual, int horas_a_sumar) {
  int horas_pasadas = hora_actual + horas_a_sumar;
  if (horas_pasadas > 24 ) {
    horas_pasadas -= 24;
  }
  return horas_pasadas;
} 

int main () {
  int hora_actual, horas_a_sumar;
  std::cout << "Introduza la hora actual: "; 
  std::cin >> hora_actual;
  std::cout << "Introduzca cuantas horas quiere sumar: "; 
  std::cin >> horas_a_sumar;

  int horas_pasadas = CalcularLaSumaDeLaHora(hora_actual, horas_a_sumar);
  std::cout << "En " << horas_a_sumar << " horas el reloj marcará " << horas_pasadas << " horas" << std::endl;
  return 0; 
}
