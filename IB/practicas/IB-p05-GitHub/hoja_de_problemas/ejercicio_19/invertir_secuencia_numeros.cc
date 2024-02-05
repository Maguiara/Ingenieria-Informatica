/* Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file secuencia_numeros_invertido.cc
 * @author Marco Aguiar Álvarez
 * @date Oct 15 2023
 * @brief Prints a vector of numbers in the inversed order. 
 *
 */

#include <iostream> 
#include <vector>
#include <fstream> 

int main () { 
  const std::string nombre_archivo = "secuencia.txt"; //Introducimos el nombre del archivo que nos dan
  std::ifstream archivo(nombre_archivo);
  int size;
  archivo >> size; //Leer la canntidad de numeros
  std::vector<int> numeros_leidos;
  //Rellenar el vector con los numeros de nuestro archivo de texto
  for (int i = 0; i < size; i++) {
    int numero;
    archivo >> numero; 
    numeros_leidos.push_back(numero);
  }
  archivo.close(); // Aqui cerramos el archivo; ya acabamos con la tarea de leer los numeros e introducirlos a un vector.

  //Imprimimos en inversa a los numeros introducidos
  for(int j = (size - 1); j >= 0; j--) { 
    std::cout << numeros_leidos[j] << " ";
  }
  std::cout << std::endl;
  return 0;
}
