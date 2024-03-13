/**
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 13/12/2023
 * @brief Archivo de implementacion de la clase Rectangulo y sus sobrecargas
*/

#include <iostream>
#include "P13_rectangulo.h"

/**
 * @brief Sobrecarga del operador de extraccion del flujo de salida
 * @param out Flujo de salida para la sobreacarga
 * @param rectangulo_usuario Rectangulo introducido por el usuario
 * @return Devuelve el flujo de salida sobrecargado
*/

std::ostream& operator<<(std::ostream& out, const Rectangulo& rectangulo_usuario) {
  out << rectangulo_usuario.base_ << " " << rectangulo_usuario.altura_;
  return out; 
}

/**
 * @brief Sobreacarga del operador de inserccion del flujo de salida
 * @param in Flujo de entrada de la sobrecarga
 * @param rectangulo_usuario Rectangulo introducido por el usuario
 * @return Devuelve el flujo de entrada sobrecargado
*/

std::istream& operator>>(std::istream& in, Rectangulo& rectangulo_usuario) {
  in >> rectangulo_usuario.base_ >> rectangulo_usuario.altura_;
  return in;
}

/**
 * @brief Sobrecarga del operador de comparacion == 
 * @param rectangulo_usuario1 Rectangulo introducido por el usuario
 * @param rectangulo_usuario2 Rectangulo introducido por el usuario
 * @return Devuelve true en caso de que los rectangulos tengan la misma base o altura
 */

bool Rectangulo::operator==( const Rectangulo& rectangulo_usuario2) {
  if (base_ == rectangulo_usuario2.base_) {
    if (altura_ == rectangulo_usuario2.altura_) {
      return true;
    } else {
      return false;
    }
  } else if (base_ == rectangulo_usuario2.altura_ ) {
    if (altura_ == rectangulo_usuario2.base_) {
      return true;
    }
  }
  return false;
}