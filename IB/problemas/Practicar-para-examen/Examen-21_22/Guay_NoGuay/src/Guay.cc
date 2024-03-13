/**
 * 
 * 
*/
#include <iostream>
#include <cstdlib>
#include "Guay.h"

/**
 * @brief Explica al usuario el correcto uso del programa
 * @param argc Cantidad de parametros por linea de comandos
 * @param argv Vector que contiene los parametros pasados por linea de comandos
*/
void Usage (int argc, char* argv[]) {
  if (argc < 2 || argc > 2 ) {
    std::cout << "Ha ejecutado el programa con el numero equivocado de parametros\n";
    std::cout << "Para mas informacion pruebe: " << argv[0] << " --help\n";
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(argc == 2 && argv[1] == "--help") {
    std::cout << "Modo de uso: " << argv[0] << " <numero>" << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/**
 * @brief Funcion que calcula la suma de los numeros que se encuentran en posiciones impares
 * @param numero_usuario Numero que introduce el usuario por linea de comando
 * @return Devuelve la suma de las posiciones impares
*/
int SumaPosicionesImpares(int numero_usuario) {
  int auxiliar{0};
  int posicion{1};
  int suma_posiciones_impares{0};
  while (numero_usuario > 0) {
    auxiliar = numero_usuario % 10;
    if (posicion % 2 != 0) {
      suma_posiciones_impares += auxiliar;
    }
    ++posicion;
    numero_usuario /= 10;
  }
  return suma_posiciones_impares;
}

/**
 * @brief Comprueba si un numero es GUAY o NO GUAY
 * @param numero_usuario Numero que introduce el usuario por linea de comando
 * @return Devuelve true en caso de que la suma sea par y false en caso que no lo sea
*/
 bool ComprobarNumeroGuay(int numero_usuario) {
  int suma_posiciones_impares = SumaPosicionesImpares(numero_usuario); 
  return (suma_posiciones_impares % 2 == 0) ? true : false;
 }