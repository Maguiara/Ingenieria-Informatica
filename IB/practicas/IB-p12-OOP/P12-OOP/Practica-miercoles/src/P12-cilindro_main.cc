/**
 * Universidad de La Laguna
 * Escuela superior de Ingenieria y Tecnologia 
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 13/12/23
 * @brief Programa cliente para la clase Cilindro
*/

#include <iostream>
#include <cstdlib> //Para std::stod
#include "tools.h"
#include "P12-cilindro.h"


int main (int argc, char* argv[]) {
  PrintProgramPorpouse();
  Usage(argc, argv);
  double altura_cilindro = std::stod(argv[1]);
  double radio_cilindro = std::stod(argv[2]);
  Cilindro cilindro_usuario(altura_cilindro, radio_cilindro);
  std::cout << "La superficie del cilindro es: " << cilindro_usuario.SuperficieCilindro(cilindro_usuario) << std::endl;
  std::cout << "El volumen del cilindor es: " << cilindro_usuario.VolumenCilindro(cilindro_usuario) << std::endl;
}