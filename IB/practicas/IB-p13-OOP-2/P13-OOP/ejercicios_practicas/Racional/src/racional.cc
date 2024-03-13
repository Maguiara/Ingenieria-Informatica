/**
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 13/12/2023
 * @brief Implementacion de los metodos y sobrecargas de la clase Racional
*/

#include <iostream>
#include "racional.h"

/**
 * 
*/
std::ostream& operator<<(std::ostream& out, const Racional& numero_racional) {
  out << numero_racional.numerador_<< "/" << numero_racional.denominador_;
  return out;
}

/**
 * 
*/
std::istream& operator>>(std::istream& in, Racional& numero_racional) {
  in >> numero_racional.numerador_;
  in >> numero_racional.denominador_;
  return in;
}

/**
 * @brief Sobrecarga del operador de sumar
 */
Racional operator+(const Racional& numero_1, const Racional& numero_2) {
  if (numero_1.denominador() == numero_2.denominador()) {
    return Racional{numero_1.numerador() + numero_2.numerador(), numero_1.denominador()};
  } else {
    return Racional{(numero_1.numerador() * numero_2.denominador()) + (numero_1.denominador() * numero_2.numerador()), numero_1.denominador() * numero_2.denominador()};
  }
}

/**
 * @brief Sobrecarga del operador de restar
*/
Racional operator-(const Racional& numero_1, const Racional& numero_2) {
 if (numero_1.denominador() == numero_2.denominador()) {
    return Racional{numero_1.numerador() - numero_2.numerador(), numero_1.denominador()};
  } else {
    return {(numero_1.numerador() * numero_2.denominador()) - (numero_1.denominador() * numero_2.numerador()), numero_1.denominador() * numero_2.denominador()};
  } 
}

/**
 * @brief Sobrecarga del operador de multiplicacion
*/
Racional operator*(const Racional& numero_1, const Racional& numero_2) {
  return Racional{numero_1.numerador() * numero_2.numerador(), numero_1.denominador() * numero_2.denominador()};
}
/**
 *@brief Sobecarga del operador de division 
*/
Racional operator/(const Racional& numero_1, const Racional& numero_2) {
  return Racional{numero_1.numerador() * numero_2.denominador(), numero_1.denominador() * numero_2.numerador() };
}

/**
 * @brief Sobrecarga del operador de comparacion <
*/
bool operator<(const Racional& numero_1, const Racional& numero_2) {
  return numero_1.numerador() * numero_2.denominador() < numero_1.denominador() * numero_2.numerador();
}

/**
 * @brief Sobrecarga del operador de comparacion >
*/

bool operator>(const Racional& numero_1, const Racional& numero_2){
 return numero_1.numerador() * numero_2.denominador() > numero_1.denominador() * numero_2.numerador();
}
