/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Aguiar Álvarez
 * @date 30 10 23
 * @brief Given a secuence of '(' and ')' prints 
 *        if the parenthesis are correctly close.
 *
 *
 */

#include <iostream>

int main () {
	char parentesis;
	std::cin >> parentesis;
	int contador_abierto{0};
	int contador_cerrado{0};
	int longitud{0};
	while (parentesis > 0 ) {
		parentesis /= 10;
		longitud++;
	}
	for (int i = 0; i <= longitud; i++) {
				int digito = parentesis % 10;
		if (digito == '(') {
			contador_abierto = contador_abierto + 1;
		} else if (digito == ')') {
			contador_cerrado = contador_cerrado + 1;
		} 
	}
	if (contador_abierto == contador_cerrado) {
		std::cout << "yes" << std::endl;
	} else {
		std::cout << "no" << std::endl;
	}
	return 0;
}
