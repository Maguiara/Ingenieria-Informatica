/**
 * 
*/

#include "circulo.h"
#include <iostream>
#include <cmath>

/**
 * @brief Imprime lo que hace el programa
*/
void PrintProgramPorpouse() {
  std::cout << "Este programa lee de la linea de comandos las coordenadas del centro de un circulo, su radio y su color" << std::endl;
  std::cout << "USando estos datos para hacer calculos como su area, perimetro, etc" << std::endl;
}

/**
 * @brief Funcion que explica como usar el programa
 * @param[in] argc cantidad de parametros pasados por linea de comando
 * @param[in] argv vector que contiene todos los parametros pasados por linea de comandos
*/
void Usage (int argc, char *argv[]) {
  if (argc == 2) {
    std::string parametro{argv[1]};
    if (parametro == "--help") {
      std::cout << "Modo de uso: " << argv[0] << " <coordenada x del centro> <coordenada y del centro> <radio> <color>" << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
  if (argc != 4) {
    std::cout << "El programa ha sido ejecutado con el numero incorrecto de parametros" << std::endl;
    std::cout << "Para mas informacion pruebe: " << argv[0] << " --help" << std::endl;
    exit(EXIT_SUCCESS);
  }
}

// Constructor por defecto
Circulo::Circulo() : centro_{}, radio_{0}, color_{Color::blanco} {}

/**
 * 
*/
Circulo::Circulo(const Punto& centro, const double radio, const Color color) : centro_{centro}, radio_{radio}, color_{color} {}


/**
 * @brief metodo que calcula el area del circulo del usuario
*/
double Circulo::Area(const double radio) const {
  return M_PI * radio * radio;
}

/**
 * @brief Metodo que calcula el perimetro de un circulo
*/

double Circulo::Perimetro(const double radio) const {
  return M_PI * 2 * radio;
}

/**
 * @brief Metodo que muestra por pantalla las caracteristicas de un circulo 
*/

void Circulo::Print(const Circulo& circulo) const {
  std::cout << "Centro del circulo: (" << circulo.centro().coordenada_x() << "," << circulo.centro().coordenada_y() << ")" << std::endl;
  std::cout << "Radio del circulo: " << circulo.radio() << std::endl;
  std::cout << "Color del circulo: ";
  switch (circulo.color()) {
    case Color::blanco:
      std::cout << "blanco" << std::endl; 
      break;
    case Color::negro:
      std::cout << "negro" << std::endl;
      break;
    case Color::azul:
      std::cout << "azul" << std::endl;
      break;
    case Color::rojo:
      std::cout << "rojo" << std::endl;
      break;
    case Color::verde:
      std::cout << "verde" << std::endl;
      break;
    default:
      std::cout << "Ese color no ha sido definido" << std::endl;
      break;
  }
}


bool Circulo::EsInterior(const Punto& un_punto, const Circulo& circulo) const {
  double distancia_centro_eje_x = un_punto.coordenada_x() - circulo.centro().coordenada_x();
  double distancia_centro_eje_y = un_punto.coordenada_y() - circulo.centro().coordenada_y();
  double distancia_centro_circulo = std::sqrt(distancia_centro_eje_x * distancia_centro_eje_x - distancia_centro_eje_y * distancia_centro_eje_y);
  return distancia_centro_circulo <= circulo.radio();
}