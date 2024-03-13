/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
  * @date Nov 02 2023
  * @brief Programa que mediante varias funciones calcula el resultado 
  *        de la funcion matematica planteada.
  * @bug There are no known bugs
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */

#include <iostream>
#include "change-case.h"

int main (int argc, char* argv[]) {
	Usage (argc, argv);
	std::string palabra = argv [1]; 
	std::string palabra_invertida = CambioDeLetras(palabra);
	PrintResult(palabra_invertida);
	return 0;
}
