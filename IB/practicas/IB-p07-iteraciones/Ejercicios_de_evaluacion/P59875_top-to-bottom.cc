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

int main () {
	int numero1, numero2;
	std::cin >> numero1 >> numero2;
	if (numero2 > numero1) {
		for ( int i = numero2; i >= numero1; i--) {
			std::cout << i << std::endl;
		}
	} else if (numero1 > numero2) {
		for ( int i = numero1; i >= numero2; i--) {
			std::cout << i << std::endl;
		}
	} else {
	std::cout << numero1 << std::endl;
	}
}
