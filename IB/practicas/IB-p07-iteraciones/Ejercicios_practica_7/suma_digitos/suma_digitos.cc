/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Aguiar Álvarez
 * @date 25.oct.23
 * @brief programa que lee un número natural e imprime como 
 * 				salida la suma de los dígitos del número en cuestión.
 *
 * 
 * 
 * @see https://docs.google.com/document/d/1-3hTIVf8tPrbn9u0vs0Cm2IGyX1XBgv8hReVU0KOSUQ/edit?usp=sharing
 * @see stoi http://www.cplusplus.com/reference/string/stoi/
 * An Object Oriented Version of the program:
 * @see https://stackoverflow.com/questions/21360694/sum-of-even-fibonacci-numbers-under-1000
 *
 */

#include <iostream> 
#include <cstdlib>
#include "suma_digitos.h"
int main (int argc, char* argv[]) {
	PrintProgramPorpouse();
	if (!CheckCorrectParameters(argc, argv, 2)) {
		return 345;
	}
	int numero;
	 numero = std::atoi(argv[1]);
	
	if (numero < 0 ) {
		std::cout << "El número ingresado no es natural \n";
	return 1;
	}

	int numeroOriginal = numero;
	int suma = 0;
	while (numero > 0) {
		suma = suma + (numero % 10);
		numero = numero / 10;	
	}

	std::cout << "La suma de los digitos del número " << numeroOriginal << " es " << suma << std::endl;
	return 0;
}
