/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Marco Aguiar Álvarez alu0101620961@gmail.com
  * @date Nov 8 2023
  * @brief El programa calcula el area de un triangulo equilatero, dado un solo lado.
  * @bug There are no known bugs
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */

#include <iostream>
#include <cmath>

/** @brief funcion que calcula el area de un triangulo equilatero en base a su lado.
	* @param[in] Recibe un valor que la funcion interpretara como un lado de un triangulo.
	* @return devuelve el valor del area del triangulo.
*/
 
double AreaTriangulo( const double lado) {
	return std::sqrt(3.0) * ((lado * lado) / 4.0);
}

int main () {
	double lado;
	std::cin >> lado;
	std::cout << AreaTriangulo(lado) << std::endl;
	return 0;
}
