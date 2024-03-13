/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
  * @date Nov 02 2023
  * @brief Archivo principal del programa comparaion.cc
  * @bug There are no known bugs
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */

#include <iostream>
#include "comparacion.h"

;int main (int argc, char* argv[]) {
	Usage(argc, argv);
	double numero1 = std::stod(argv[1]);
	double numero2 = std::stod(argv[2]);
	const double epsilon{1e-7};
	bool result = AreEqual(numero1, numero2, epsilon);
	PrintResult(result);
	return 0;
}
