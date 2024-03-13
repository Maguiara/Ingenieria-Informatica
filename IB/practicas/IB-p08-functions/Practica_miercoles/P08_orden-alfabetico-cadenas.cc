/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Marco Aguiar Álvarez alu0101620961@gmail.com
  * @date Nov 8 2023
  * @brief El programa recibe dos cadenas y las ordena alfabeticamente
  * @bug There are no known bugs
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */

#include <iostream>
#include <string>

/** @brief Funcion que determina si la cadena recibida esta ordenada alfabeticamente
	* @param[in] recibe dos cadenas de caracteres tipo string
	* @return si la cadena 1 y la cadena 2 esta ordenada devuleve true, en cualquier otro caso devuele false.
*/ 

bool ComprobarOrdenAlfabetico(const std::string& cadena1, std::string cadena2) {
	int longitud1 = cadena1.length;
	for (int i = 0; i <= longitud1; i++) {
		if (cadena1[i] > cadena[i + 1]) {
			return false;
		} else {
			return true;
		}
	}
	int longitud2 = cadena2.length;
	for (int i = 0; i <= longitud2; i++) {
		if (cadena2[i] > cadena[i + 1]) {
			return false;
		} else {
			return true;
	}
} 
std::string OrdenarAlfabeticamente (std::string cadena1, std::string cadena2) {
	



int main () {
	std::string cadena1; 
	std::string cadena2;
	std::cin >> cadena1 >> cadena2;
