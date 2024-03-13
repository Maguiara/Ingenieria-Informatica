/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Marco Aguiar Álvarez alu0101620961@gmail.com
  * @date Nov 2 2023
  * @brief El programa realiza el calculo de una funcion matematica 
  *        dada que contiene hasta 3 parametros.
  * @bug There are no known bugs
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */


#include <iostream>
#include <string>

/** @brief Funcion que explica el correcto funcionamiento del programa en cuestion.
	* @param [argc] Cantidad de parametros introducidos en el programa.
	* @param [argv] Vector que guarda los parametros introducidos para su uso a lo largo el programa.
	*
*/ 
void Usage(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Este programa a sido ejecutado con el numero incorrecto de parametros" << std::endl;
		std::cout << "Para el correcto funcionamiento de este pruebe " << argv[0] << " palabra" << std::endl;
		std::cout << "Siendo 'palabra' una cadena de caracteres " << std::endl; 
		exit(1);
	}
}

std::string CambiarVocalesAMayuscula(std::string palabra) {
	int longitud = palabra.length();
	for (int i = 0; i <= longitud; i++) {
		if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u') {
			palabra[i] = palabra[i] - 32;
		} 
	}
	return palabra;
}

void PrintResult(std::string palabra_vocales_mayusculas) {
	std::cout << palabra_vocales_mayusculas << std::endl;
	}
