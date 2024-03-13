#include <iostream>
#include <cstdlib>
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