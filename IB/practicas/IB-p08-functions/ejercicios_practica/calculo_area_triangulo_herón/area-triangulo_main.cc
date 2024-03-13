/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
  * @date Nov 02 2023
  * @brief Programa que dados unos lados de un triangulo 
	* 			 calcula su area mediante la formual de heron
	*				 si este es valido, en caso contrario muestra 
	* 		 	 un mensaje de error por pantalla.
  * @bug There are no known bugs
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "area-triangulo.h" 

int main (int argc, char* argv[]) {
	Usage(argc, argv);
	double lado1 = std::atoi(argv[1]);
	double lado2 = std::atoi(argv[2]);
	double lado3 = std::atoi(argv[3]);
	double area;
	if (IsAValidTriangle( lado1, lado2, lado3, area)) {
		std::cout << std::fixed << std::setprecision(2) << area << std::endl;
	} else {
		std::cout << "Not a valid triangle" << std::endl;
	}
	return 0;
}
