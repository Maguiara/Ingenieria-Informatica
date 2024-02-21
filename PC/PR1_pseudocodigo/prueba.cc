#include <iostream> 
#include <iomanip>

 int CalcularFactorial(int n) {
  int factorial{1};
  for (int i = n; i > 0; i--) {
    factorial *= i;
  }
  return factorial;
}


int main () {
  double factorial{1.0};
  factorial = CalcularFactorial(2);
  double resultado {1};
  resultado = (1 / factorial);

  std::cout << resultado << std::endl;
}