/* Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file circulo.cc
 * @author Marco Aguiar Álvarez
 * @date Oct 15 2023
 * @brief Prints the perimeter and area with the 
 *        input of the radius 
 *
 */

#include <iostream> 
#include <cmath> 

int main() {
  const double pi{3.141559265359};
  double radio;
  std::cout << "Introduzca la medida del radio" << std::endl;
  std::cin >> radio; 

  double perimetro = 2 * pi * radio;
  double area = pi * pow(radio, 2);

  std::cout << "El perímetro de su cirulo es " << perimetro 
            << " y el área es de " << area << std::endl;
  return 0;
} 
