/** 
	* @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
	* @brief Programa que calcula la distancia entre dos puntos representados por vectores.
	* @date Nov 15 2023
*/ 
#include <iostream>
#include <vector>
#include <cmath>

/* @brief Funcion que calcula la disctancia entre dos puntos represenatdos por sus vectores
	* @param [in] dos vectores llenos de numeros reales
	* @return Devuelve la distancia entre los puntos que representan los vectores.
*/ 


double Distancia(const std::vector <double>& vector1, const std::vector <double>& vector2) {
	if (vector1.size() != vector2.size()) {
		return -1.0;
	} else { 
		int longitud = vector1.size();
		double suma{0};
		for (int i = 0; i < longitud; ++i) {	
			suma += (vector1[i] - vector2[i]) * (vector1[i] - vector2[i]);
		}
		double raiz_suma = std::sqrt(suma);
		return raiz_suma;
	}
}


int main() {
	std::vector <double> vector1 {0, 1};
	std::vector <double> vector2 {0, 1};
	std::cout << Distancia(vector1, vector2) << std::endl;
}
