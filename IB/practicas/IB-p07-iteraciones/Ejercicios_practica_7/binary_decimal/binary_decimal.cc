/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 26 10 23
 * @brief Pritns the binary form of a decimal number
 *
 *
 */ 

#include <iostream>
#include <cstring> // Para poder usar strncopy 
#include "binary_decimal.h"

bool isBinary(const char *string){
	while (*string) {
		if (*string != '0' && *string != '1') {
    	return false;
		}
		string++;
	}
	return true;
}

int binaryToDecimal(const char *binary) { 
	int decimal{0}; 
 	int base{1}; 
	int longitud{0};
	while (binary[longitud] != '\0') { // Calcula la longitud del numero binario
		longitud++;
	}
	for (int i = longitud - 1; i >= 0; i--) {
		if (binary[i] == '1') {
			decimal += base;
		}
		base *= 2;
	}
	return decimal;
}

int main(int argc, char* argv[]) {
	printProgramPorpouse();
	if (!checkCorrectParameters(argc, argv, 2)) {
		return 345;
	}
	char Input_binario[64]; // Se asume como maximo 63 caracteres binarios. 
  
  strncpy(Input_binario, argv[1], sizeof(Input_binario)); // Copia el valor de argv[1] en Input_binario
  Input_binario[sizeof(Input_binario) - 1] = '\0'; // Asegura que la cadena termine con '\0'


	if (isBinary(Input_binario)) {
		int decimalNumber = binaryToDecimal(Input_binario);
		std::cout << "El número decimal equivalente es: " << decimalNumber << std::endl;
	} else {
		std::cerr << "Error: La entrada no es un número binario válido." << std::endl;
		return 1; 
	}
	return 0;
}
