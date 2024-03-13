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
	int numero;
	while (std::cin >> numero) {
		int copia = numero;
		int sum{0};
		while (numero > 0) {
			sum += numero % 10;
			numero /= 10;
		}
	std::cout << "The sum of the digits of " << copia << " is " << sum << "." << std::endl;
	}
}
