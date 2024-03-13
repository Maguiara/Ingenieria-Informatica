/**
 * Universidad de La Laguna
 * Escuela superior de Ingenieria y Tecnologia 
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 13/12/23
 * @brief Implementacion de las herramientas a usar en el programa
*/

#include <iostream>
#include <string>
#include <cstdlib> // para exit
#include "tools.h"

/**
 *@brief Muestra por pantalla que hace el programa
*/
void PrintProgramPorpouse() {
  std::cout << "Este programa lee por linea de comandos la altura y el radio de un cilindro para" << std::endl;
  std::cout << "asi crear este utilizando la  clase 'Cilindro'" << std::endl;
}


/**
 * @brief Explica el uso del programa al usuario
 * @param argc Cantidad de parametros pasados por linea de comado
 * @param argv Vector que contiene los parametros pasados por linea de comamdo 
*/
void Usage(int argc, char* argv[]) {
  if (argc == 2) {
    std::string parametro{argv[1]};
    if (parametro == "--help") {
      std::cout << "Modo de uso: " << argv[0] << " <altura> <radio>" << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
  if (argc != 3) {
    std::cout << "El programa ha sido ejecutado con el numero incorrecto de parametros" << std::endl;
    std::cout << "Para mas informacion pruebe: " << argv[0] << " -- help" << std::endl;
    exit(EXIT_SUCCESS);
  } 
}