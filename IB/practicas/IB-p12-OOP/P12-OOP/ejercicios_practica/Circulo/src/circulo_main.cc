/**
 * 
 * 
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include "circulo.h"


int main (int argc, char* argv[]) {
  PrintProgramPorpouse();
  Usage (argc, argv);
  double coordenada_x_centro = std::stod(argv[1]);
  double coordenada_y_centro = std::stod(argv[2]);
  double radio_circulo = std::stod(argv[3]);
  Punto centro(coordenada_x_centro,coordenada_y_centro);
  double radio{radio_circulo};
  Color color{negro};

  Circulo mi_circulo(centro, radio, color);
  mi_circulo.Print(mi_circulo);
  std::cout << "Area del circulo: " << mi_circulo.Area(radio) << std::endl;
  std::cout << "Perimetro del circulo: " << mi_circulo.Perimetro(radio) << std::endl;
  Punto un_punto(9,8);
  if (mi_circulo.EsInterior(un_punto, mi_circulo)) {
    std::cout << "Es interior" << std::endl;
  } else {
    std::cout << "No es interior" << std::endl;
  }
}
