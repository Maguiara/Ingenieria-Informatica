/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Marco Aguiar Álvarez @alu0101620961@ull.edu.es
 * @date 27 Nov 2023
 * @brief Progama que lee y luego realiza operaciones
*/
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

int main (int argc, char* argv[]) {
  Usage (argc, argv)
  std::string nombre_fichero{argv[0]};
  std::string nombre_fichero_salida{argv[1]};
  std::vector<string> numeros = LeerNumerosFichero(nombre_fichero);
  std::vector<char> operadores = LeerOperadoresFichero(nombre_fichero);
  std::vector <int> numeros_enteros;
  for (int i{0}; i < numeros.size(); i++) {
    valor_entero = std::stoi(numeros[i]);
    numeros_enteros.push_back(valor_entero);
  }
  std::ofstream output_file(nombre_fichero_salida);
  for (int i{0}; i < operadores.size(); i++) {
    switch (operador[i] == '+' || operador[i] == '-' || operador[i] == 'x' || operador[i] == ':') {
      case '+':
        output_file << numeros_enteros[1] + numeros_enteros[2] << " ";
        break;
      case '-':
        output_file << numeros_enteros[1] + numeros_enteros[2] << " ";
        break;
      case 'x':
        output_file << numeros_enteros[1] * numeros_enteros[2] << " ";
        break;
      case ':':
        if( numeros_enteros[2] == 0) {
          output_file << NaN;
        } else {
        output_file << numeros_enteros[1] / numeros_enteros[2] << " ";
        }
        break;
      default:
        break;
    }
  }
}