





void printProgramPorpouse() {
  std::cout << "El programa lee un numero introducido cualquiera " << std::endl;
  std::cout << "y mediante varias operaciones sencillas transforma" << std::endl;
  std::cout << "el numero decimal introducido a un numero binario" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
} 

bool checkCorrectParameters (int argc, char *argv[], const int kCorrectNumber) {
	if (argc != kCorrectNumber) {
		std::cout << "El programa se ha ejecutado con el numero incorrecto de parametros" << std::endl;
		std::cout << "Este programa deberia ejecutarse de la siguiente manera: " << std::endl;
		std::cout << argv[0] << "parametro1" << std::endl;
		std::cout << "siendo parametro1 un numero entero cualquiera" << std::endl;
		return false;
	}
	return true;
}
