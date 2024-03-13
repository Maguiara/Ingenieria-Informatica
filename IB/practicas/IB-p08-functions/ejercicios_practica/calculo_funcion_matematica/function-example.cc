/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Marco Aguiar Álvarez alu0101620961@gmail.com
  * @date Nov 2 2023
  * @brief El programa realiza el calculo de una funcion matematica 
	* 			 dada que contiene hasta 3 parametros.
  * @bug There are no known bugs
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */

#include <iostream>
#include <cstdlib>
#include <cmath>

/** Funcion que muestra el correcto uso del programa.
  * En el caso que no se ejecute de manera adecuada, 
	* muestra un mensaje sobre como usar el programa 
	* y finaliza con la ejecucion de este. 
	* Para funcionar correctamente, el programa precisa de 3 numeros naturales. 
	*
	*
	* @param[in] argc
	* param [in] argv
*/
void Usage(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "Ha introducido un numero incorrecto de parametros" << std::endl;
		std::cout << "Para mas información pruebe " << argv[0] << " --help" << std::endl;
		exit(EXIT_SUCCESS);
		}
	std::string parametro(argv[1]);
	if (parametro == "--help") {
		const std::string kHelptext = "Este programa calcula el resultado de una funcion matematica \
		la cual consta de 3 parametros (estos tinen que ser numeros reales) los cuales el usuario tiene \
		que introducir por medio de lineas de comando";
		std::cout << kHelptext << std::endl;
		exit(EXIT_SUCCESS); 
	}
}

/** Funcion que calcula el numerador de la funcion 
	* matematica en la que primero se calcula el polinomio
	* que se halla dentro de la raiz para luego calcular el resultado de esta. 
	*
	*
	* @param[in] parametro3. Se calcula la raiz en base de este paramtro.
	* @return devuleve el resultado de la raiz
	
*/
double NumeradorDeLaFuncion (double parametro3) {
	double interior_raiz = (2 * parametro3 ) - 4; 
	double numerador = pow(interior_raiz, 0.5);
	return numerador;
} 

/** Funcion que calcula el denominador de la funcion 
	* de la funcion matematica el cual consta de una 
	* resta de dos paramtetros al cuadrado.
	*
	*
	* @param [in] parametro1 parametro2 numeros reales los cuales se restan sus cuadrados.
	* @return devuelve el resultado de restar ambos paramtros al cuadrado.
*/ 
double DenominadorDeLaFuncion (double parametro1, double parametro2) {
	double cuadrado_primer_parametro = pow(parametro1, 2);
	double cuadrado_segundo_parametro = pow(parametro2, 2);
	double denominador = cuadrado_primer_parametro - cuadrado_segundo_parametro;
	return denominador; 
}

/** Funcion que calcula el resultado de la funcion matematica dada 
	* una vez calculado el numerador y denominador de esta.
	* Esta funcion solo realiza la division de los valores que se
	*  obtuvieron de las otras dos funciones.
	*
	*
	* @param[in] numerador denominador, resultados de las anteriores funciones.
	* @return devuelve el resultado de la funcion matematica dada. 
*/
double ResultadoDeLaFuncion (double numerador, double denominador) {
	double resultado = numerador / denominador; 
	return resultado; 
}
