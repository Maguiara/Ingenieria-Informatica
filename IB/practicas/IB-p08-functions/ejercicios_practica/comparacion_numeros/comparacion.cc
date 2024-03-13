/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Marco Aguiar Álvarez alu0101620961@gmail.com
  * @date Nov 2 2023
  * @brief El programa realiza el calculo de una funcion matematica 
  *        dada que contiene hasta 3 parametros.
  * @bug There are no known bugs
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include "comparacion.h"

/** Funcion que explica al usuario como usar el programa en caso de 
	* que introuzca mal las variables que necesita este programa
	* 
	* @param [in] Numero de parametros en la linea de codigo.
	* @param [in] argv vector que contiene todos los parametros introducidos.
*/

;void Usage(int argc, char *argv[]) {
	if (argc != 3) {
		std::cout << "Ha introducido el numero incorrecto de parámtros" << std::endl;
		std::cout << "Para mas información, pruebe a introducir: " << argv[0] << " --help" << std::endl;
		exit(EXIT_SUCCESS);
	}
	std::string parametro{argv[1]};
	if (parametro == "--help") {
		const std::string kHelpText = "Para el correcto funcionamiento de este programa, introduza a continuiacion del ejecutable \
		dos numeros que desee comparar, por ejemplo 1.0/3 y 0,333";
		std::cout << kHelpText << std::endl;
		exit(EXIT_SUCCESS);
	}
}
	
/** Funcion que mediante unos calculos compara dos numeros introducidos y asi determinar 
	* si ambos numeros introducidos son iguales o no. 
	* 
	* @param[numero1, numero2, epsilon] numeros reales a comparar. 
	* Epsilon es el margen de error para considerar que dos numeros sean iguales.
	* @return Si los numeros son iguales devuelve true, en caso contrario devuelve false.
*/ 

bool AreEqual(const double numero1, const double numero2, const double epsilon) {
	if (std::abs(numero1 - numero2) < epsilon) {
		return true;
	} else {
		return false;
	}
}

/** Funcion que imprime por pantalla el resultado de la funcion que compara los numeros
	* introducidos por el usuario.
	*
	* 
	* @Param[in] resultado es el texto que se imprimira por pantalla y AreEqual es una funcion que determina si dos numeros son equivalentes o no
	* @return Devuelve un mensaje que se imprimira por pantalla que varia dependiendo si los numeros introducidos son equivalentes o no. 
*/

void PrintResult(const bool result) {
	if (result == true) {
	std::cout << "The numbers are equal." << std::endl;
	} else {
	std::cout << "The numbers are not equal." << std::endl;
	}
} 
