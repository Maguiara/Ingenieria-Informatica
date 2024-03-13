/* * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 22 Nov 23
 * @brief Programa que lee una cadena de caracteres y devuelve un array del tamaño de la cadena de caracteres y con los caracteres correspondiente a cada posicion.
 * @see https://docs.google.com/document/d/1-3hTIVf8tPrbn9u0vs0Cm2IGyX1XBgv8hReVU0KOSUQ/edit?usp=sharing
 * @see stoi http://www.cplusplus.com/reference/string/stoi/
 * An Object Oriented Version of the program:
 * @see https://stackoverflow.com/questions/21360694/sum-of-even-fibonacci-numbers-under-1000
 *
 */

#include <iostream>
#include <string>
#include <array>

/**
	* @brief Funcion que extrae de una cadena de caracteres sus caracteres por separado
	* @param[in] palabra cadena de caracteres
	* @return deveulve un array con los caracteres de la palabra
*/

constexpr int kLongitud{10};
std::array<char, kLongitud>  CaracteresPalabra(const std::string& palabra) {
	std::array<char, kLongitud> resultado;
	if (palabra.size() > kLongitud) {
		for (int i{0}; i < kLongitud; ++i) {
			resultado[i] = palabra[i];
		}
	} else if {
		int contador{0};
		int i{0};			
		while (contador < kLongitud) {
		  if (i == palabra.length()) {
		    i = 0;
		  }
		  resultado[contador] = palabra[i];
		  contador++;
		  i++;
		}
	}
	return resultado;
}
	
/**
	* @brief Funcion main que muestra por pantalla el resultado de lo anterior
	* @param[in] palabra cadena de caracteres que introduce el usuario
	* 
*/ 
int main () {
	std::string palabra;
	std::cin >> palabra;
	std::array<char, kLongitud> resultado = CaracteresPalabra(palabra);
	std::cout << "[";
	for (int i{0}; i < 10; ++i) {
		std::cout << resultado[i] << ",";
	}
	std::cout << "]" << std::endl;		
}
