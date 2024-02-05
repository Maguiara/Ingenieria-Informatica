/* Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Aguiar Álvarez
 * @date Oct 15 2023
 * @brief Prints a given 3 digits number inversed
 *
 */

#include <iostream> 

int main () { 
// ejemplo numero 789

  int numero, numero2,  NumeroInvertido, unidades, decenas, centenas; 
  std::cout << "Introduzca un número de 3 cifras" << std::endl;
  std::cin >> numero;

  centenas = numero / 100;
  numero2 = numero % 100;
  decenas = numero2 / 10;
  unidades = numero % 10; 
  NumeroInvertido = (unidades * 100) + (decenas * 10) + centenas;

  std::cout << "El número invertido es " << NumeroInvertido << std::endl;
  return 0; 
}
