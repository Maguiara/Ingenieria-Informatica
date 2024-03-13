/**
 * 
 * 
*/


#include <iostream>
#include <cstdlib>
#include "FileManager.h"
#include "tools.h" 


int main (int argc, char* argv[]) {
  Usage(argc, argv);
  const long int indice_usuario = std::stoi(argv[2]);
  std::string nombre_archivo = argv[1]; 
  FileManager archivo_usuario(nombre_archivo);
  std::cout << "La palabra con el indice " << indice_usuario << " del archivo es: " <<  archivo_usuario.SacarPalabraDelArchivo(indice_usuario) << std::endl;
}