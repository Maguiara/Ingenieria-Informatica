/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Marco Aguiar Álvarez @alu0101620961@ull.edu.es
 * @date 27 Nov 2023
 * @brief Fichero con la definicion de las funciones para el main
*/
#include <iostream>
#include <cstdlib>

/**
 * @brief Funcion que muestra por pantalla en caso de que se ejecute el programa con el numero incorrecto de parametros
 * @param[in] argc Cantidad de parametros
 * @param[in] argv Vector que contiene los paramteros
*/
void Usage (int argc, char *argv[]); {
  if (argc != 3){
      std::cout << "Falta un parametro." << std::endl;
      exit(EXIT_SUCCESS);
  }
}
