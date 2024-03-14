#include <iostream>

const int m = 3;
int C[m][m] = {{5, 1, 3},
 {-1, 8, 2},
 {-3, -2, 5}};

 void SumatorioDiagonalPrincipal() {
    int suma{0};
  for (int i = 0; i <= m; ++i) {
    suma += C[i][i];
  }
  std::cout << "La suma de la diagonal principal es: " << suma << std::endl;
 }

 void MostrarTrianguloInferior() {
  int suma {0};
  std::cout << "Triangulo inferior sin diagonal principal: " << std::endl;
  
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < i; j++ ) {
      std::cout << C[i][j] << " ";
      suma += C[i][j];
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
  std::cout << "La suma de la diagonal inferior es (sin la diagonal principal): " << suma << std::endl;
 }

 void MostrarTrianguloSuperior() {
  int suma{0};
  std::cout << "Triangulo superior sin diagonal principal: " << std::endl;
  for (int i = 0; i < m; ++i) {
    for (int j = i; j < m; ++j) {
      std::cout << C[i][j] << " ";
      suma += C[i][j];
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
  std::cout << "La suma de la diagonal superior es (sin la diagonal principal>): " << suma << std::endl;
 }

int main() {
  SumatorioDiagonalPrincipal();
  MostrarTrianguloInferior(); 
  MostrarTrianguloSuperior();
}

