/**
 * Universidad de La Laguna
 * Escuela Superior de Informatica y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez
 * @date 09/12/23
 * @brief Programa que implementa la clase puntos para poder operar con puntos en el espacio 2D
*/

#include "point2D.h"
#include <iostream>
#include <cstdlib>

int main (int argc, char* argv[]) {
  Usage(argc, argv);
  double coordenada_x_primer_punto = std::stod(argv[1]);
  double coordenada_y_primer_punto = std::stod(argv[2]);
  double coordenada_x_segundo_punto = std::stod(argv[3]);
  double coordenada_y_segundo_punto = std::stod(argv[4]);
  Point2D un_punto{coordenada_x_primer_punto, coordenada_y_primer_punto};
  Point2D otro_punto{coordenada_x_segundo_punto, coordenada_y_segundo_punto};
  un_punto.Show();
  otro_punto.Show();
  std::cout << "'Metodo que mueve el primero punto 3 unidades del eje x y dos unidades del eje y'" << std::endl;
  un_punto.Move(3, 2);
  un_punto.Show();
  std::cout << "La distancia entre los puntos es " << un_punto.Distance(otro_punto) << std::endl;
  Point2D punto_medio = un_punto.Middle(otro_punto);
  std::cout << "El punto medio entre los puntos es (" << punto_medio.componente_x() << "," << punto_medio.componente_y() << ")" << std::endl;


}