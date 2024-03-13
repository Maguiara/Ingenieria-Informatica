/**
 * 
*/

#include <iostream>
#include <string>
#include <fstream>
#include "cripto.h"
#include "tools.h"

void EncriptadoXor(std::ifstream& fichero_entrada, std::ofstream& fichero_salida, const std::string& key) {
  char caracter;
  int i = 0;
  while (fichero_entrada.get(caracter)) {
    caracter = caracter ^ key[i];
    fichero_salida << caracter;
    i++;
    if (i == key.size()) {
      i = 0;
    }
  }
}

void DesencriptadoXor(std::ifstream& fichero_entrada, std::ofstream& fichero_salida, const std::string& key) {
  char caracter;
  int i = 0;
  while (fichero_entrada.get(caracter)) {
    caracter = caracter ^ key[i];
    fichero_salida << caracter;
    i++;
    if (i == key.size()) {
      i = 0;
    }
  }
}

void EncriptadoCesar(std::ifstream& fichero_entrada, std::ofstream& fichero_salida, const int& key) {
  char caracter;
  while (fichero_entrada.get(caracter)) {
    caracter = caracter + key;
    fichero_salida << caracter;
  }
}

void DesencriptadoCesar(std::ifstream& fichero_entrada, std::ofstream& fichero_salida, const int& key) {
  char caracter;
  while (fichero_entrada.get(caracter)) {
    caracter = caracter - key;
    fichero_salida << caracter;
  }
}