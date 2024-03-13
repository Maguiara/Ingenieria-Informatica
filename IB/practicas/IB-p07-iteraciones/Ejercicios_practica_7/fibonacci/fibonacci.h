void PrintProgramPorpouse () {
  std::cout << "Este programa lee la cantidad de terminos que quieres imprimir" << std::endl;
  std::cout << "de la susesion de fibonacci, calculandolo sabiendo que el termino" << std::endl;
  std::cout << "siguiente es igual a la suma de los dos anteriores, comenzando con" << std::endl;
  std::cout << "el 0 y el 1 como los dos primeros terminos de esta susecion." << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
  }

bool CheckCorrectParameters (const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa se ha ejecutado con el numero incorrecto de parametros" << std::endl;
    std::cout << "Para su correcto funcionamiento deberia escribir en la terminal " << argv[0] << "parametro1" << std::endl;
		std::cout << "siendo parametro1 un numero entero positivo cualquiera." << std::endl;
    return false;
    }   
  return true;
}

