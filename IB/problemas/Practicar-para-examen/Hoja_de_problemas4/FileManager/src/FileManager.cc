/**
 * 
 * 
 * 
*/
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include "FileManager.h"

std::string FileManager::SacarPalabraDelArchivo(const long int indice_usuario) {
  std::ifstream input_file(nombre_archivo());
  if (!input_file.is_open()) {
    std::cerr << "No se pudo abrir el archivo" << std::endl;
  } else {
    std::string palabras;
    std::vector<std::string> palabras_archivo;
    while (input_file >> palabras) {
      palabras_archivo.emplace_back(palabras);
    }
    const long int longitud_archivo{palabras_archivo.size()};
    std::string palabra_buscada;
    if (longitud_archivo < indice_usuario) {
      std::cerr << "El archivo tiene menos palabras que el indice introducido" << std::endl;
    } else {
      for (int i = 0; i < longitud_archivo; i++) {
        if (i == indice_usuario) {
          palabra_buscada = palabras_archivo[i];
        }
      }
    }
  return palabra_buscada;
  }
}