/**
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 13/12/2023
 * @brief Archivo de declaracion de la clase Rectangulo junto a las sobrecargas
*/

#include <iostream>
#include "Car.h"


/**
 * @brief Sobrecarga del operador >>
 * @param in flujo de entrada
 * @return Devuelve el flujo de entrada sobrecargado
*/

std::istream& operator>>(std::istream& in, Car& coche_usuario) {
  std::cout << "Introduzca el modelo del coche\n";  
  std::getline(in, coche_usuario.model_);
  std::cout << "Introduzca la placa del coche\n";
  std::getline(in, coche_usuario.plate_);
  std::cout << "Introduzca el kilometraje del coche\n";
  in >> coche_usuario.kilometers_;
  return in;
}

/**
 * @brief Sobrecarga del operador de extraccion del flujo de salida <<
 * @param out flujo de salida
 * @return Devuelve el flujo de salida sobrecargado
*/

std::ostream& operator<<(std::ostream& out, const Car& coche_usuario) {
  out << coche_usuario.model_ << " " << coche_usuario.plate_ << " " << coche_usuario.kilometers_;
  return out;
}

/**
 * @brief Sobrecarga del operador de comparacion ==
 * @param coche_usuario2 otro objeto de la clase Car con el que realizar la comparacion para la sobrecarga
 * @return Devuelve true o false dependiendo del kilometraje de cada coche
*/

bool Car::operator>(const Car& coche_usuario2) const { return kilometers_ > coche_usuario2.kilometers_; }