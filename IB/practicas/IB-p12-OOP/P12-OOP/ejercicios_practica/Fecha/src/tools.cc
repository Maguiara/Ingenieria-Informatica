/**
 * Universidad de La Laguna 
 * Escula Superior de Ingenieria y Tecnologia 
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @brief Implementacion de las funciones que explican el uso del programa al usuario,
 *        ademas de mostrar el correcto uso al usuario
 * @date 12/12/23
 * 
*/
#include<iostream>
#include <string>
#include <cstdlib>

/**
 * @brief Funcion que indica por pantalla el proposito del programa
*/
void PrintProgramPorpouse() {
  std::cout << "Este programa recive la fecha brindada por el usuario y solo utiliza el constuctor de la clase en caso de que la fecha sea\n";
  std::cout << "una fecha con un año bisiesto" << std::endl;
}

/**
 * @brief Funcion que explica el usuario el correcto uso del programa
 * @param argc Cantidad de parametros pasados por linea de comandos
 * @param argv Vector que contiene todos los parametros pasados por linea de comando
*/
void Usage (int argc, char* argv[]) {
  if (argc == 2) {
    std::string parametro{argv[1]};
    if (parametro == "--help") {
      std::cout << "Modo de uso: " << argv[0] << " <dia> <mes> <año> (recuerde que estos parametros han de ser numeros enteros positivos)" << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
  if (argc != 4) {
    std::cout << "El programa ha sido ejecutado con el numero incorrecto de parametros" << std::endl;
    std::cout << "Para mas inforamcion pruebe: " << argv[0] << " --help" << std::endl;
    exit(EXIT_SUCCESS);
  }
}