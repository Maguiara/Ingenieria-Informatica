/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Aguiar Álvarez
 * @date Oct 15 2023
 * @brief A basic calculator with the arithmetic operators 
 *
 */

#include <iostream> 

int main() { 
  int valor1;
  int valor2; 
  char operador; 
  
  std::cout << "Introduzca el primer valor" << std::endl; 
  std::cin >> valor1; 
  std::cout << "Introduzca el segundo valor" << std::endl;
  std::cin >> valor2; 
  std::cout << "Introduzca el operador" << std::endl; 
  std::cin >> operador;

  if (operador == '+') {
    std::cout << valor1 << " + " << valor2 << " = " << valor1 + valor2 << std::endl;
  } else if (operador == '-') {
      std::cout << valor1 << " - " << valor2 << " = " << valor1 - valor2 << std::endl;
  } else if (operador == '*') {
      std::cout << valor1 << " * "<<  valor2 << " = " << valor1 * valor2 << std::endl;
  } else if (operador == '/') { 
      std::cout << valor1 << " / " << valor2 << " = " << valor1 / valor2 << std::endl; 
  } else if (operador == '%') { 
      std::cout << valor1 << " & " << valor2 << " = " << valor1 % valor2 << std::endl;
  } else 
      std::cout << "Esta operación no se puede realizar" << std::endl;
  return 0; 
} 
