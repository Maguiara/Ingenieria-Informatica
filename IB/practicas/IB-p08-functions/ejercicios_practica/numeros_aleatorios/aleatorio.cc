/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Marco Aguiar Álvarez alu0101620961@gmail.com
  * @date Nov 2 2023
  * @brief El programa recoge dos numeros m y n y calcula un numero aleatorio
	* 			 en el intervalo [n,m] siendo n < m. 
  *       
  * @bug There are no known bugs
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */

#include <iostream>
#include <cstdlib>
#include "aleatorio.h" 

void Usage (int argc, char *argv[]) {
	if (argc != 3) {
		std::cout << "El programa ha sido ejecutado con el numero incorrecto de parametros" << std::endl;
		std::cout << "Para su correcta ejecucion ponga en la linea de comandos: " << std::endl;
		std::cout << argv[0] << " numero1 numero2" << std::endl;
		std::cout << "Siendo numero1 y numero2 dos numeros enteros y positivos, que cumpla numero1 < numero2" << std::endl;
		exit(1);
	}
}
/** Funcion que determina si los valores introducidos forman un intervalos valido 
	* para el correcto funcionamineto de este programa
	* 
	* 
	* @Param[in] Los numeros introducidos por el usuario representan el inicio del intervalo y el final del mismo bajo el nombre de 
	* inicio_intervalo y final_intervalo.
	* @Return: En caso de que se cumpla que inicio_intervalo < final_intervalo devolvera true, en cualquier otro caso devolvera false.
*/ 
bool ComprobacionIntervalo( int inicio_intervalo, int final_intervalo) {
	if ( inicio_intervalo < final_intervalo) {
		return true;
	} else {
		return false;
	}
}
/** Funcion que calcula un numero aleatorio para un intervalo introduzido por el usuario
	* 
	* 
	* @Param[int, int] recibe los numeros introducidos por el usuario como comienzo y final de un intervalo.
	* @Param[const bool] resultado de la funcion anterior para comprobar que los numeros introducidos son validos.
	* @Return en caso de ser valido calcula y devuelve un numero aleatorio en dicho apartado.
*/ 
int CalculoNumeroAleatorio (int inicio_intervalo, int final_intervalo, const bool comprobacion) {
	if (comprobacion == true) {
		int numero_aleatorio = inicio_intervalo + rand() % (final_intervalo - inicio_intervalo + 1);
		return numero_aleatorio;
	} else {
	std::cout << "Los numeros introducidos no forman un intervalo valido" << std::endl;
	exit(1);
	}
}

/** Funcion para imprimir por pantalla el numero obtenido de la funcion anterio.
*/ 
void PrintResult( const int numero_aleatorio) {
	std::cout << numero_aleatorio << std::endl;
}
