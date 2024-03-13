/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Aguiar Álvarez
 * @date Oct 15 2023
 * @brief This program prints the logic table of 
 *        the operators "and", "or", "not". 
 *
 */
 
#include<iostream>

int main() { 
  bool A, B; 
  std::cout << "    Tabla de la verdad logica    " << std::endl;
  std::cout << "    Operadores AND, OR, NOT     " << std::endl;
  std::cout << "   A    B   A&&B   A||B   !A " << std::endl;

  A = true; B = true; {  
    bool And = A&&B;
    bool Or = A||B; 
    bool Not = !A;
      std::cout << "   " << A << "    " << B << "    " << And << "      " << Or << "     " << Not << std::endl;
  }

 B = false; {
    bool And = A&&B;
    bool Or = A||B; 
    bool Not = !A;
      std::cout << "   " << A << "    " << B << "    " << And << "      " << Or << "     " << Not << std::endl;
  }
  
  A = false; B = true; {
    bool And = A&&B;
    bool Or = A||B; 
    bool Not = !A; 
      std::cout << "   " << A << "    " << B << "    " << And << "      " << Or << "     " << Not << std::endl;
  }

  B = false; {
    bool And = A&&B;
    bool Or = A||B; 
    bool Not = !A;
     std::cout << "   " << A << "    " << B << "    " << And << "      " << Or << "     " << Not << std::endl;
  }

  return 0; 
}      
