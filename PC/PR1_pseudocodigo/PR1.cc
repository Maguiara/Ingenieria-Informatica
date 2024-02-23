

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
  double error{0.0};
  std::cout << "Introduzca el maximo de Error permitido\n";
  std::cin >> error;
  if (!(error >= 0.0001 && error < 1)) {
    std::cerr << "El error debe ser mayor o igual a 0.00001 y menor a 1" << std::endl;
    exit(EXIT_SUCCESS);
  }
  double termino_calculado{1};
  double termino_serie{1};
  int numero_iteraciones{0};
  double factorial{1};
  while (termino_calculado >= error) {
    factorial = CalcularFactorial(termino_serie);
    termino_calculado = (1 / factorial);
    numero_iteraciones++;
    termino_serie++;
  }

  std::cout << "La aproximacion despues de " << numero_iteraciones << " iteraciones es: " << std::setprecision(17) << termino_calculado << std::endl;
}