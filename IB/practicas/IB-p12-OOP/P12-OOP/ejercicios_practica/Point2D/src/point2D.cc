/**
 * Universidad de La Laguna
 * Escuela Superior de Informatica y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez
 * @date 09/12/23
 * @brief Archivo que contiene la implementacion de los metodos de la clase point2D
*/

#include <iostream>
#include <cmath>
#include <string>
#include "point2D.h"

void PrintProgramPorpouse() {
  std::cout << "Este programa representa puntos en el espacio 2D ademas de realizar diferentes operaciones con ellos" << std::endl;

}

void Usage (int argc, char *argv[]) {
  if (argc == 2) {
    std::string parametro{argv[1]};
    if (parametro == "--help") {
      std::cout << "Para el correcto funcionamiento el programa necesita de 4 numeros enteros" << std::endl;
      std::cout << "Modo de uso: " << argv[0] << " <coordenada x primer punto> <coordenada y primer punto> <coordenada x segundo punto> <coordenada y segundo punto>" << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
  if (argc != 5) {
    std::cout << "Ha ejecutado el programa con el numero incorrecto de parametros, pruebe: " << argv[0] << " --help para mas informacion" << std::endl;
    exit(EXIT_SUCCESS);
  }
}


/**
 * @brief constructor por defecto de la clase Ponint2D
*/
Point2D::Point2D() : componente_x_{0}, componente_y_{0} {}
/**
 * @brief Constructor con parametros de la calse Point2D
 * @param[in] componente_x La componente x del punto
 * @param[in] componente_y La componente y del punto
*/
Point2D::Point2D(const double componente_x, const double componente_y) : componente_x_{componente_x}, componente_y_{componente_y}  {}

/**
 * @brief Metodo para mostrar por pantalla el punto en cuestion
 * 
*/
void Point2D::Show() const {
  std::cout << "El punto es (" << componente_x() << "," << componente_y() << ")" << std::endl;
}

/**
 * @brief Metodo para mover el punto a nuevas coordenadas
 * @param[in] delta_x Cantidad de unidades que se mueve el punto en el eje x
 * @param[in] delta_y Cantidad de unidades que se mueve el punto en el eje y
*/

void Point2D::Move(const double delta_x, const double delta_y) {
  componente_x_ += delta_x;
  componente_y_ += delta_y;
}

/**
 * @brief Metodo para calcular la distancia entre dos puntos
 * @param[in] otro_punto Otro punto para calcular la distancia con el primero
 *
*/

double Point2D::Distance(const Point2D &otro_punto) const {
  double diferencia_x = componente_x_ - otro_punto.componente_x_;
  double diferencia_y = componente_y_ - otro_punto.componente_y_;
  return std::sqrt(diferencia_x * diferencia_x + diferencia_y * diferencia_y);
}

/**
 * @brief Metodo para encontrar el punto medio de dos puntos
 * @param[in] otro_punto Otro punto con el que calcular el punto medio
*/

Point2D Point2D::Middle(const Point2D &otro_punto) const {
  double mitad_x = (componente_x_ - otro_punto.componente_x_) / 2.0;
  double mitad_y = (componente_y_ - otro_punto.componente_y_) / 2.0;
  return Point2D(mitad_x, mitad_y);
}