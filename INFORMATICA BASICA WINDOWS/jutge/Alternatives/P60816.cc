#include <iostream>

int main () {
  int numero;
  std::cin >> numero;

	if (numero == 0) std::cout << numero;
  while (numero > 0) {
    int digito_hexadecimal = numero % 16;
		if (digito_hexadecimal >= 10) {
			switch (digito_hexadecimal) { 
				case 10:
					std::cout << "A";
					break;
				case 11:
					std::cout << "B";
					break;
				case 12:
					std::cout << "C";
					break;
				case 13:
					std::cout << "D";
					break;
				case 14:
					std::cout << "E";
					break;
				case 15:
					std::cout << "F";
					break;
				default:
					break;
			}
		} else {
		std::cout << digito_hexadecimal; 
  	}
		numero /= 16;
	}
	std::cout << std::endl;
}