/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file sum.cc       
* @author Marco Aguiar Álvarez alu0101620961@ull.edu.es 
* @date Oct 12 2023
* @brief This program prints the sum of two numbers. 
*
* @bug There are no known bugs
* @see https://jutge.org/problems/P48107
*/

#include <iostream> 

int main () { 

  int number1{};
  int number2{};
  int number3{};
  int number4{};
  int number5{};
  int number6{};
  int number7{};
  int number8{};

  std::cin >> number1 >> number2 >> number3 >> number4 >> number5 >> number6 >> number7 >> number8;  
  std::cout << number1 + number2 << std::endl; 
  std::cout << number3 + number4 << std::endl;
  std::cout << number5 + number6 << std::endl; 
  std::cout << number7 + number8 << std::endl; 
  return 0; 
}  
