#include <iostream>

void invertirVector(int* vector, int tamano) {
  int* inicio = vector;
  int* fin = vector + tamano - 1;

  while (inicio < fin) {
    int temp = *inicio;
    *inicio = *fin;
    *fin = temp;

    inicio++;
    fin--;
  }
}

int main() {
  int vector[] = {1, 2, 3, 4, 5};
  int tamano = sizeof(vector) / sizeof(vector[0]);

  std::cout << "Vector original: ";
  for (int i = 0; i < tamano; i++) {
    std::cout << vector[i] << " ";
  }
  std::cout << std::endl;

  invertirVector(vector, tamano);

  std::cout << "Vector invertido: ";
  for (int i = 0; i < tamano; i++) {
    std::cout << vector[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
