/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
  * @date Nov 02 2023
  * @brief Archivo para declarar las funciones a utilizar
  * @bug There are no known bugs
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */


#include <iostream>
#include "aleatorio.h" 

int main (int argc, char* argv[]) {
	Usage(argc, argv);
	int numero1 = std::stoi(argv[1]);
	int numero2 = std::stoi(argv[2]);
	bool comprobacion = ComprobacionIntervalo(numero1, numero2);
	int numero_aleatorio = CalculoNumeroAleatorio(numero1, numero2, comprobacion);
	PrintResult(numero_aleatorio);
}
