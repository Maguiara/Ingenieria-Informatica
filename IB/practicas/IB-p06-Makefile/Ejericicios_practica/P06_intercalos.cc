/**









*/ 

#include <iostream>

int main () {
	int numero1, numero2, numero3, numero4;
	std::cin >> numero1 >> numero2 >> numero3 >> numero4;
	
	if ( numero1 < numero3 && numero2 < numero4) {
		std::cout << "[]" << std::endl;
	} else if (numero1 > numero3 && numero2 < numero4){
		std::cout << "[" << numero1 << "," << numero2 << "]" << std::endl;
	} else if (numero1 > numero3 && numero2 > numero4) {
		std::cout << "[" << numero1 << "," << numero1 << "]" << std::endl;
	} else if ( numero1 == numero3 && numero2 == numero4) {
		std::cout << "[" << numero1 << "," << numero2 << "]" << std::endl;
	}
return 0;
}
