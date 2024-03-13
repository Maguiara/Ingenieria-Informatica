/** 
	* @author Marco Aguiar ÁLvarez alu0101620961@ull.edu.es
	* @brief Programa que determina si una cadena introducida es un numero o no
	* @date Nov 13 2023
*/ 

#include <iostream>
#include <string>

/** @brief  Funcion que comprueba si la cadena introducida es un numero o no.
	*@param[in] una cadena de caracteres que pueden ser numeros o no
	*@return devuelve true en caso de que sea numero y false en cualquier otro caso
*/ 

bool ComprobarNumeroReal(const std::string& numero_real) {
	int longitud = numero_real.length();
	int  contador_menos{0}, contador_puntos{0};
	for (int i = 0; i < longitud; i++) {
		if (numero_real[i + 1] >= '1' && numero_real[i + 1] <= '9') {
		 if ( numero_real[i] == '-') {
				contador_menos++;
			} else if (numero_real[i] == '.') {
				contador_puntos++;
			}	 
		if (contador_puntos > 1 || contador_menos > 1) {
			return false;
		} else {
			return true;
			}
		}	
	return false;
	}
}

int main () {
	std::string numero_real;
	std::cin >> numero_real;
	std::cout << ComprobarNumeroReal(numero_real) << std::endl;
}
