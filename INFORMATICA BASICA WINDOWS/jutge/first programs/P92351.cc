#include <iostream> 

int main () { 

  long long number1{0}, number2{0}, division{0}, reminder{0};
  std::cin >> number1 >> number2;
    division = number1 / number2;  
    reminder = number1 % number2;
  if ((number1 < 0 && reminder != 0) || (number1 < 0 && number2 < 0) ) { 
      division -= 1;  
      reminder += number2;
  }    
    std::cout << division << " " << reminder << std::endl; 

  return 0; 
}