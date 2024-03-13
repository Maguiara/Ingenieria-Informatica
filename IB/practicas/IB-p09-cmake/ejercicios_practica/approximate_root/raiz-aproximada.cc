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
#include <cstdlib>
#include <cmath>

void Usage(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "El programa ha sido ejecutado con el numero incorrecto de parametros" << std::endl;
		std::cout << "Para el correcto funcionamiento del programa, prube: " << argv[0] << " numero1" << std::endl;
		std::cout << "Siendo numero1 un numero real positivo cualquiera" << std::endl;
		exit(1);
	} 
}

double CalcularRaizAproximada(double numero, const double EPSILON = 1e-7) {
	double delta{1.0}; 
	double root{1.0};
	while (std::abs(root * root - numero) > EPSILON) {
		if (delta > 0) {
    	while (root * root < numero) {
      	root += delta;
      }
    } else {
      while (root * root > numero) {
  	    root += delta;
     	}
    }
  	delta *= -0.5;
 }
 return root;
}

void PrintResult(const double numero, const double resultado) {
	std::cout << "La raiz aproximada de " << numero << " es " << resultado << std::endl;
}	
