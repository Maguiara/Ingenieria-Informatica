void printProgramPorpouse() {
  std::cout << "El programa lee un numero binario cualquiera y" << std::endl;
  std::cout << "y mediante varias funciones comprueba y transforma el numero" << std::endl;
  std::cout << "binario en el numero decimal correspondiente " << std::endl; ;
  std::cout << std::endl;
  std::cout << std::endl;
} 

bool checkCorrectParameters (int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "El programa se ha ejecutado con el numero incorrecto de parametros" << std::endl;
    std::cout << "Este programa deberia ejecutarse de la siguiente manera: " << std::endl;
    std::cout << argv[0] << "parametro1" << std::endl;
    std::cout << "Siendo parametro1 un numero binario cualquiera para el correcto funcionamiento del programa " << std::endl;
    return false;
  }
  return true;
}

