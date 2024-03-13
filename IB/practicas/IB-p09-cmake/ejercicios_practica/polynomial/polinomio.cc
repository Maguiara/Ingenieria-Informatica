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
#include <cstdlib>
#include <vector>

void Usage (int argc, char *argv[]) {
	if (argc < 3) {
		std::cout << "El programa a sido ejecutado con el numero incorrecto de parametros" << std::endl;
		std::cout << "Pruebe: " << argv[0] << " coeficientes valor" << std::endl;
		std::cout << "Siendo coeficientes el valor de los coeficientes del polinomio y valor un numero real positivo" << std::endl;
		exit(1);
	}
}

double EvaluarPolinomio(const std::vector <double>& coeficientes, const double valor) {
	double resultado = 0.0;
	double grado = coeficientes.size() - 1;
	for (int i = grado; i >= 0; --i) {
		resultado = resultado * valor + coeficientes[i];
	}
	return resultado;
}

void PrintResult (const double resultado) {
	std::cout << "El resultado de evaluar este polinimio es: " << resultado << std::endl;
}
