/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file  decimal_binary.cc
 * @author Marco Aguiar Álvarez
 * @date 25 10 23
 * @brief Pritns the binary form of a decimal number
 *
 *
 */ 

#include <iostream>
#include <cstdlib> // Para la funcion atoi
#include "decimal_binary.h"

int CalcularNumeroBinario(int decimal) {
	int auxiliar{0};
	int multiplicador{1};
	int modulo{0};
	while (decimal > 1) {
		modulo = decimal % 2;
		auxiliar += modulo * multiplicador;
		multiplicador = multiplicador * 10;
		decimal = decimal / 2;
	}
	auxiliar += multiplicador;
	return auxiliar;
}	

int main (int argc, char* argv[]) {
	printProgramPorpouse(); 
	if (!checkCorrectParameters(argc, argv, 2)) {
		return 345;
	}
	
	int numeroDecimal = std::atoi(argv[1]); // convierte el argumento a un numero entero 
	int numeroBinario;
	numeroBinario = CalcularNumeroBinario(numeroDecimal);
	std::cout << "El número " << numeroDecimal << " corresponde con " << numeroBinario << " en binario." << std::endl;
	return 0;
}	
