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
#include "vocales-mayusculas.h" 

int main (int argc, char* argv[]){
	Usage (argc, argv);
	std::string palabra = argv[1];
	std::string palabra_vocales_mayusculas = CambiarVocalesAMayuscula(palabra);
	PrintResult(palabra_vocales_mayusculas);
	return 0;
}

