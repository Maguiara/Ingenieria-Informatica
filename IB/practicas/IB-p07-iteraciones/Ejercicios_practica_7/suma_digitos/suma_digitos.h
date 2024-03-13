void PrintProgramPorpouse () {
  std::cout << "El programa lee un numero, por ejemplo 2022, e imprime" << std::endl;
  std::cout << "por pantalla el resultado de sumar todos los digitos del"   << std::endl;
  std::cout << "numero en cuestion, en este caso imprimiria 6 (2+0+2+2)" << std::endl;
  std::cout << "Para el correcto funcionamiento el numero debe de ser natural" << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  }

bool CheckCorrectParameters (const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa se ha ejecutado con el numero incorrecto de parametros" << std::endl;
    std::cout << "Para su correcto funcionamiento deberia escribir en la terminal " << argv[0] << " parametro1" << std::endl;
    std::cout << "Siendo parametro1 un numero natural." << std::endl;
    return false;
    }   
  return true;
}

