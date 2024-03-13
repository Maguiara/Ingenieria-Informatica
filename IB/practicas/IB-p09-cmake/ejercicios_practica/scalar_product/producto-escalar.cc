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
	if (argc % 2 == 0 ) {
		std::cout << "Ha ejecutado el programa con el numero equivocado de parametros" << std::endl;
		std::cout << "Para ejecutarlo correctametne, necesita introducir un numero par de parametros" << std::endl;
		std::cout << "para que asi los vectores tengan el mismo tamaño" << std::endl;
		exit(1);
	}	
}

double CalcularProductoEscalar(const std::vector <double>& vector1,const std::vector <double>& vector2) {
	double producto_escalar = 0.0;
	int longitud = vector1.size(); //Los vectores tiene el mismo tamaño da igual vector1 o vector2
	for (int i = 0; i < longitud; i++) {
		producto_escalar += vector1[i] * vector2[i];
	}
	return producto_escalar;
}

void PrintResult(const double producto_escalar) {
	std::cout << "El producto escalar entre el vector1 y vector2 es: " << producto_escalar << std::endl;
}

