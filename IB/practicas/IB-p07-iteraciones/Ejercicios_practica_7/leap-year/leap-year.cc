/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Aguiar Álvarez
 * @date 25 10 23
 * @brief Prints if the year the program reads 
 * 				is a leap year or not.
 *
 *
 */ 

#include <iostream>
#include <cstdlib>
#include "leap-year.h"

int main (int argc, char* argv[]) {
	PrintProgramPorpouse();
	if (!CheckCorrectParameters(argc, argv, 2)) {
		return 345;
	}
	int anyo;
	anyo = std::atoi(argv[1]);
	if (anyo < 1800 || anyo > 9999) {
		std::cerr << "El año introducido debe pertenecer al intervalo [1800,9999]" << std::endl;
		return 1;
	}
	if (anyo % 400 == 0 || (anyo % 4 == 0 && anyo % 100 != 0)) {
		std::cout << "El año " << anyo << " es bisiesto" << std::endl;
	} else {
		std::cout << "El año " << anyo << " no es bisiesto" << std::endl;
	}
	return 0;
}
