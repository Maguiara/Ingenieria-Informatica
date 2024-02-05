/* Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Aguiar Álvarez
 * @date Oct 15 2023
 * @brief Prints the arithmetic mean of 4 different values
 *
 */

#include <iostream> 

int main () { 

  int valor1, valor2, valor3, valor4;
  std::cout << "Ingrese 4 valores para calcular su media" << std::endl;
  std::cin >> valor1 >> valor2 >> valor3 >> valor4; 

  double suma = valor1 + valor2 + valor3 + valor4;
  double media = suma / 4;

  std::cout << "La media de los valores introducidos es " << media << std::endl;
  return 0; 
}
