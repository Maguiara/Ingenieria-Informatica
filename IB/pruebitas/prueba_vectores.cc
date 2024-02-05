#include <iostream> 
#include <vector> 


int main () {
	std::vector <double> vector1;
	std::vector <double> vector2;
	int numero_componentes1, numero_componentes2;
	std::cout << "Ingrese el numero de componentes de los vectores: " << std::endl;
	std::cin >> numero_componentes1;
	for (int i = 0; i < numero_componentes1; i++) {
		std::cin >> vector1[i];
	}
	std::cin >> numero_componentes2; 
	for (int i = 0; i < numero_componentes2; i++) {
		std::cin >> vector2[i];
	}
	std::cout << vector1 << " " << vector2 << std::endl;
	}
