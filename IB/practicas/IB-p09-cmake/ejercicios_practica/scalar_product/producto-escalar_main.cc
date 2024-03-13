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
#include <vector> 
#include <cstdlib>
#include <iomanip>
#include "producto-escalar.h"

int main (int argc, char*argv[]) {
	Usage(argc, argv);
	std::vector<double> vector1;
	std::vector<double> vector2;
	for (int i = 1; i <= argc / 2; i++) {
		vector1.push_back(std::stod(argv[i]));
	}
	for (int i = (argc / 2) + 1; i < argc; i++) {
		vector2.push_back(std::stod(argv[i]));
	}
	double resultado = CalcularProductoEscalar(vector1, vector2);
	PrintResult(resultado);
}
