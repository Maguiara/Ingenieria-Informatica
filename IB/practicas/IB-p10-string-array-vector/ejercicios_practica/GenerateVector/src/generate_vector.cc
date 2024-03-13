/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief Cada nuevo término de la serie de Fibonacci se genera sumando los dos anteriores. 
 *        Comenzando con 0 y 1, los primeros 10 términos serán: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
 *        Desarrolle en C++ un programa que calcule la suma de todos los términos de valor par 
 *        de la serie que sean menores que 1000.
 * @see https://docs.google.com/document/d/1-3hTIVf8tPrbn9u0vs0Cm2IGyX1XBgv8hReVU0KOSUQ/edit?usp=sharing
 * @see stoi http://www.cplusplus.com/reference/string/stoi/
 * An Object Oriented Version of the program:
 * @see https://stackoverflow.com/questions/21360694/sum-of-even-fibonacci-numbers-under-1000
 *
 */


#include <vector>
#include <cstdlib>
#include <time.h>

//PRIMERA PARTE: GENERAR VECTOR ALEATORIO EN UN INTERVALO DADO // 
/** 
	* @brief Funcion que genera un vector con los datos que le introduzca el usuario.
	* @param[in] size Simboliza el tamaño del vector generado
	* @param [in] lower Simboliza el numero mas pequeño del intervalo en donde se va a generar numeros aleatorios.
	* @param [in] upper Simboliza el numero mas grande del intervalo en donde se va a generar numeros aleatorios.
	* @return Un vector con el tamaño introducido y rellenado con numeros aleatorio en el intervalo lower upper. 
*/
std::vector<double> GenerateVector (const int size, const double lower, const double upper) {
	std::vector <double> vector1;
	int inferior = lower * 100;
	int superior = upper * 100;
	int numero_decimal{100};
	double valor{0.0},
	srand(time(NULL));
	for (int i = 1; i <= size; ++i) {
		valor = (double) (inferior + rand() % (superior + 1 - inferior))/numero_decimal;
		vector1.push_back(valor);
	}
	return vector1;
}


// SEGUNDA PARTE: REDUCESUM // 

/** 
	* @brief Funcion que recoge un vector y va sumando todos sus componentes
	* @param[in] vector1 vector generado aleatoriamente con la funcion anterior.
	* @return Devuelve la suma de los componenetes del vector. 
*/

double ReduceSum (const std::vector<double>& vector1) {
	double suma_componentes{0};
	int longitud = vector1.size();
	for (int i = 0; i < longitud; ++i){
		suma_componentes += vector1[i];
	}
	return suma_componentes;
}

// TERCERA PARTE: CALCULO MAXIMO MINIMO Y VALOR MEDIO //
/**
	* @brief Funcion que calcula el valor maximo, valor minimo y el promedio de un vector.
	* @param[in] vector1 vector generado aleatoriamente.
	*	@param[in] suma_componentes resultado de la funcion ReduceSum
	*	@param[inout] maximo valor maximo del vector
	*	@param[inout] minimi valor minimo del vector
	*	@param[inout] valor_medio la media de los componenetes del vector

*/

void CalcularMaximoMinimoValorMedio (const std::vector<double>& vector1, double suma_componentes, double& maximo, double& minimo, double& valor_medio) {
	int longitud = vector1.size();
	for (int i = 0; i < longitud; ++i) {
		if ( i == 0) {
			minimo = vector1[i];
			maximo = vector1[i];
		} else if (vector1[i] < minimo) {
			minimo = vector1[i];
		} else if (vector1[i] > maximo) {
			maximo = vector1[i];	
		}
	}
	valor_medio = suma_componentes / longitud;
}

// CUARTA PARTE: CONCATENAR DOS VECTORES //

/**
	* @brief Funcion que concatena dos vectores en un unico vector
	* @param[in] vector1 vector generado aleatoriamente
	* @param[in] vector2 vector generado aleatoriamente
	* @return Concatenacion de los dos vectores 

*/ 
std::vector<double> ConcatenarVectores (std::vector<double>& vector1, std::vector<double>& vector2) {
	for (const auto valor : vector2) {
		vector1.push_back(valor);
	}
	return vector1;
}
