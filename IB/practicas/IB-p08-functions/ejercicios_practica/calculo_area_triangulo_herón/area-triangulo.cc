/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
  * @date Nov 02 2023
  * @brief Programa que mediante varias funciones calcula el resultado 
	* 			 de la funcion matematica planteada.
  * @bug There are no known bugs
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */



#include <iostream>
#include <cstdlib>
#include <cmath>
#include "area-triangulo.h"

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa de tres numeros reales de los cuales se cumpla que a+b >= c, a+c >= b y b+c >= a
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
  if (argc != 4) {
    std::cout << argv[0] << ": Faltan introducir las medidas de los lados del triangulo" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter = argv[1];
  if (parameter == "--help") {
    const std::string kHelpText = "Este programa calcula el area de un triangulo mediante la formula \
de heron, para ellos el usuario debera introducir tres numeros \ 
reales que cumplan la validez de formar un triangulo para la correcta ejecucion del programa";
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}
/* Funcion que determina mediante varias comprobaciones 
*  si los lados introducidos forman un triangulo 
*  valido o no, en caso de que sea valido calula el 
*	 area de dicho triangulo mediante la formula de heron,
*  en caso contrario, muestra por partalla un mensaje de error.
*/
bool IsAValidTriangle(double lado_a, double lado_b, double lado_c, double& area_heron) {
	if (lado_a == 0 || lado_b == 0 || lado_c == 0 || lado_a + lado_b <= lado_c || lado_a + lado_c <= lado_b || lado_b + lado_c <= lado_a) {
		return false;
	}
	double suma_lados = lado_a + lado_b + lado_c;
	double semiperimetro = suma_lados / 2;
	area_heron = sqrt(semiperimetro * ((semiperimetro - lado_a) * (semiperimetro - lado_b) * (semiperimetro - lado_c)));
	return true;
}

