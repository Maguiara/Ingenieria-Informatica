/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @file tools.cc (definiciones)
 * 
 * @brief Implementación de las funciones de la clase Tools
 * @date 30/11/2023
 * 
*/

#include <iostream>
/**
 * @brief Imprime por pantalla el proposito del programa
 *
*/
void PrintProgramPorpouse() {
  std::cout << "Este programa calcula la suma, resta, multiplicacion y division de dos numeros complejos." << std::endl;
}

/**
 * @brief Imprime por pantalla el uso correcto del programa
 *
 * @param argc Numero de parametros pasados por linea de comandos
 * @param argv Vector de parametros pasados por linea de comandos
*/
void Usage (int argc, char *argv[]) {
  if (argc == 2) {
    std::string parameter{argv[1]};
    if (parameter == "--help") {
      std::cout << "Para el correcto funcionamiento de este programa" << std::endl; 
      std::cout << "debe pasar por linea de comandos dos numeros enteros " << std::endl;
      std::cout << "que representaran la parte real y la parte imaginaria de un numero complejo" << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
  if (argc != 5) {
    std::cout << argv[0] << ": Faltan numeros enteros como parametros." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
}