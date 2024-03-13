/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 28/11/2023
 * @brief Programa que lee un archivo de texto con diferentes palabras y produce una salida A.txt, B.txt, ... Z.txt con las palabras que empiezan por cada una de las letras del alfabeto.
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <set>

#include "tools.h"
#include "ordenar.h"

int main (int argc, char* argv[]) {
  PrintProgramPorpouse();
  Usage(argc, argv);
  std::string input_file{argv[1]};
  std::set<char> letters;
  std::vector<std::string> words = ReadWordsFromFile(input_file, letters);
  for (const char letter : letters) {
    WriteWordsToFile(words, letter);
  }
  return 0;
}