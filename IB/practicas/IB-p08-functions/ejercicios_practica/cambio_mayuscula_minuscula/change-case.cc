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
#include <cstdlib>
#include "change-case.h" 

/** Funcion utilizada para explicar al usuario el funcionamiento de este programa
	* 
	*
	* @param[in] argc cantidad de parametros introducidos.
	* @param[in] argv vector que contiene todos los parametros introducidos.
*/
void Usage (int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "El programa ha sido ejecutado con el numero incorrecto de parametros." << std::endl;
		std::cout << "Pruebe: " << argv[0] << " palabra, siendo palabra una cadena de caracteres" << std::endl;
		std::cout << "que contiene letras mayúsculas, minúsculas y demas caracteres" << std::endl;
	exit(1);
	}
}

/** Funcion que coge una cadena de caracteres introducida y cambia los caracteres en minuscula por su 
	* correspondiente mayuscula y viceversa.
	* 
	* 
	* @param[in] argc cantidad de parametros pasados por linea de comandos
	* @param[in] argv Vector donde se guardan los parametros introducidos.
*/ 
std::string CambioDeLetras( std::string palabra) {
	int longitud = palabra.length();
	for (int i = 0; i <= longitud; i++) {
		if (palabra[i] >= 'a' && palabra[i] <= 'z') {
			palabra[i] = palabra[i] - 32;
		} else if (palabra[i] >= 'A' && palabra[i] <= 'Z') {
			palabra[i] = palabra[i] + 32; 
		}
	} 
	return palabra;
} 	

/** Funcion que imprime por pantalla el resultado obtenido en la funcion anterior
	* 
	*
	* 
	*
*/
void PrintResult(std::string palabra_invertida) { 
	std::cout << palabra_invertida << std::endl;	
}
