void PrintProgramPorpouse () {
  std::cout << "Este programa lee un numero introduzido que representa un año" << std::endl;
  std::cout << "entre 1800 y 9999, y mediante tres opereaciones comprobamos si" 	<< std::endl;
  std::cout << "dicho año se trata de un año bisiesto o de un año normal" << std::endl;
  std::cout << "en el primer caso imprimira YES y en el seguno NO" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
  }

bool CheckCorrectParameters (const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa se ha ejecutado con el numero incorrecto de parametros" << std::endl;
    std::cout << "Para su correcto funcionamiento deberia escribir en la terminal " << std::endl;
		std::cout << argv[0] << " parametro1" << std::endl;
		std::cout << "Siendo parametro1 un numero natural entero perteneciente al intervalo [1800,9999]" << std::endl;
    return false;
    }   
  return true;
}

