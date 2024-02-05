/**
* Universidad de la Laguna 
* Escuela Superior de Ingenieria y Tecnologia


@autor Marco Aguiar Álvarez
@date 25 10 2023
*/

#include <iostream>
#include <string>

int main () {
	std::string nombre1, nombre2;
	std::cin >> nombre1 >> nombre2;
	char letra_nombre1 {};
	char letra_nombre2 {};

	if (letra_nombre1 > letra_nombre2) {
		std::cout << nombre1 << "<" << nombre2 << std::endl;
	} else if ( letra_nombre1 <  letra_nombre2) {
		std::cout << nombre2 << ">" << nombre1 << std::endl;
	} else {
		std::cout << nombre1 << "=" << nombre2 << std::endl;
	}
	return 0;
}
