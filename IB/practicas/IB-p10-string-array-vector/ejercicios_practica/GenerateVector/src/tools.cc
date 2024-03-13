/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief Programa que genera un vector aleatorio con un size minimo y maximo dado. 
 * @see https://docs.google.com/document/d/1-3hTIVf8tPrbn9u0vs0Cm2IGyX1XBgv8hReVU0KOSUQ/edit?usp=sharing
 * @see stoi http://www.cplusplus.com/reference/string/stoi/
 * An Object Oriented Version of the program:
 * @see https://stackoverflow.com/questions/21360694/sum-of-even-fibonacci-numbers-under-1000
 *
 */

#include <iostream>
#include <cstdlib>
#include "tools.h"

/* Funcion que explica el funcionamiento del programa.
*/ 
void PrintProgramPorpouse() {
 std::cout << "El programa necesitara de 6 numeros para su correcto funcionamiento. \nLos tres primeros corresponden a los componentes del primer vector, siendo el primer numero el tamaño de este, el segundo y el tercero el intervalo en el que se generaran los numeros que rellenaran el vector. \nPara los siguientes 3 numeros funcionaran igual creando un segundo vector siguiendo los mismos parametros. " << std::endl;
}

/** Funcion que explica el correcto funcionamiento del programa a la hora de ser ejecutado.
	* Si este es mal ejecutado, muestra un mensaje por pantalla y finaliza la ejecucion.
	* Para su correcta ejecucion el programa precisa tres numero que simbolizan el tamaño,
	* el primer termino y el ultimo termino (en ese orden) y se rellena con numeros aleatorios 	
	* que se encuentran entre ese maximo y ese minimo.
	*
	* @param[in] Argc numero de parametros pasados por linea de comandos. 
	* @param[in] argv vector que contiene todos los parametros pasados por linea de comandos.
*/


void Usage (int argc, char *argv[]) {
	if (argc != 7) {
		std::cout << "El programa ha sido ejecutado con el numero incorrecto de parametros" << std::endl;
		std::cout << "Para mas información pruebe: " << argv[0] << " --help"  << std::endl;
		exit(EXIT_SUCCESS); 
	}
	std::string parametro{argv[1]};
	if (argc == 2 && parametro == "--help") {
		std::cout << kHelpText << std::endl;
		exit(EXIT_SUCCESS);
	}
}


