


#include <iostream> 

int main() { 
  int a, b, c{0}; 
  std::cout << "Introduzca dos valores entero" << std::endl; 
  std::cin >> a;
  std::cin >> b; 
  c = a;  
  a = b; 
  b = c;  
  std::cout << "Tus valores son " << a << " y " << b << std::endl; 
  return 0; 
} 
