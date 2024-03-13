/**
 * Universidad de La Laguna 
 * Escula Superior de Ingenieria y Tecnologia 
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @brief Programa cliente de la clase fecha
 * @date 12/12/23
 * 
*/


#include <iostream>
#include <cstdlib> // Usado para std::stod
#include "tools.h"
#include "fecha.h"

int main (int argc, char* argv[]) {
  PrintProgramPorpouse();
  Usage(argc, argv);
  int dia = std::stod(argv[1]);
  int mes = std::stod(argv[2]);
  int anyo = std::stod(argv[3]);

  Fecha fecha_usuario(dia, mes, anyo);
  fecha_usuario.Print();
}