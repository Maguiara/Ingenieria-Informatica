/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief Programa que incluye tres de los 4 ejercicio de esta practica relacionados con vectores.
 *
 */
#include "tools.h"
#include "generate_vector.h"
#include <iostream>
#include <cstdlib>

int main (int argc, char* argv[]) {
	PrintProgramPorpouse();
	Usage (argc, argv);
	int size = std::stoi(argv[1]);
	int lower = std::stod(argv[2]);
	int upper = std::stod(argv[3]);
	std::cout << "VECTOR 1: " << std::endl;
	std::vector my_vector = GenerateVector(size, lower, upper);
	for (const auto valor : my_vector) {
		std::cout << "Componentes: " << valor << std::endl;
	}
	
	// SEGUNDA PARTE // 
	double suma_componentes = ReduceSum(my_vector);
	std::cout << "La suma de los componentes del vector que se genero aleatoriamente es: " << suma_componentes << std::endl;
	
	// TERCERA PARTE // 
	double maximo;
	double minimo;
	double valor_medio;
	CalcularMaximoMinimoValorMedio(my_vector, suma_componentes, maximo, minimo, valor_medio);
	std::cout << "Valor maximo: " << maximo << " Valor minimo: " << minimo << " Valor medio: " << valor_medio << std::endl; 
	std::cout << std::endl;

	// CUARTA PARTE //
	int size2 = std::stoi(argv[4]);
	int lower2 = std::stoi(argv[5]);
	int upper2 = std::stoi(argv[6]);
	std::cout << "VECTOR 2: " << std::endl;
	std::vector<double> my_vector2 = GenerateVector(size2, lower2, upper2);
	for (const auto valor2 : my_vector2) {
		std::cout << "Componentes vector2: " << valor2 << std::endl;
	}

	double suma_componentes2 = ReduceSum(my_vector2);
	std::cout << "La suma de los componentes del vector que se genero aleatoriamente es: " << suma_componentes2 << std::endl;

	double maximo2;
	double minimo2;
	double valor_medio2;
	CalcularMaximoMinimoValorMedio(my_vector2, suma_componentes2, maximo2, minimo2, valor_medio2);
	std::cout << "Valor maximo: " << maximo2 << " Valor minimo: " << minimo2 << " Valor medio: " << valor_medio2 << std::endl; 

	std::cout << std::endl;
	std::cout << "VECTORES CONCATENADOS: " << std::endl;
	std::vector<double> vector_concatenado = ConcatenarVectores(my_vector, my_vector2);
	std::cout << "Componentes concatenados: ";
	for (const auto valor3 : vector_concatenado) {
		std::cout << valor3 << " "; 
	}
	std::cout << std::endl;
}
