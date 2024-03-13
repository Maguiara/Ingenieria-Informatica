/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
  * @date Nov 02 2023
  * @brief Programa que mediante varias funciones calcula el resultado 
	* 			 de la funcion matematica planteada.
  * @bug There are no known bugs
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "function-example.h" 

int main (int argc, char* argv[]) {
	Usage(argc, argv);
	double parametro1 = std::atoi(argv[1]);
	double parametro2 = std::atoi(argv[2]);
	double parametro3 = std::atoi(argv[3]);
	double numerador_funcion = NumeradorDeLaFuncion(parametro3);
	double denominador_funcion = DenominadorDeLaFuncion(parametro1, parametro2);
	double resultado = ResultadoDeLaFuncion(numerador_funcion, denominador_funcion);
	std::cout << resultado << std::endl;
	return 0;
}

