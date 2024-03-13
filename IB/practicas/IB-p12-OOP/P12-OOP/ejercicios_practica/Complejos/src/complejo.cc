/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Marco Aguiar Álvarez
 * @date 30/11/2023
 * @brief Implementacion de los metodos de la clase complejo
*/

#include <iostream> 
#include "tools.h"
#include "complejo.h"
/**
 * @brief Constructor por defecto de la clase complejo
*/
Complejo::Complejo() : real_{0.0}, imaginario_{0.0} {} 

/**
 * @brief Constructor con parametros de la clase complejo
 * @param[in] real Parte real del numero imaginario
 * @param[in] imaginario Parte imaginaria del numero complejo
*/
Complejo::Complejo(const double real, const double imaginario) : real_{real}, imaginario_{imaginario} {}

/**
 * @brief Sobrecarga del operador de inserccion del flujo de salida
 * @param[in] out Parametro del flujo de salida
 * @param[in] complejo Numero complejo del que se van a imprimir sus datos 
*/
std::ostream& operator<<(std::ostream& out, const Complejo& complejo) {
  out << complejo.real() << " + " << complejo.imaginario() << "i";
  return out;
}

/**
 * @brief Sobrecarga del operador arimetrico suma (+)
 * @param[in] complejo1 Numero complejo introducido por el usuario
 * @param[in] complejo2 Numero complejo introducido por el usuario
 */ 
Complejo operator+(const Complejo& complejo1, const Complejo& complejo2) {
  return Complejo{complejo1.real() + complejo2.real(), complejo1.imaginario() + complejo2.imaginario() };
}
/**
 * @brief Sobrecarga del operador arimetrico suma (-)
 * @param[in] complejo1 Numero complejo introducido por el usuario
 * @param[in] complejo2 Numero complejo introducido por el usuario
 */ 
Complejo operator-(const Complejo& complejo1, const Complejo& complejo2) {
  return Complejo{complejo1.real() - complejo2.real(), complejo1.imaginario() - complejo2.imaginario()};
}
/**
 * @brief Sobracarga del operador multiplicacion (*)
 * @param complejo1 
 * @param complejo2
*/

Complejo operator*(const Complejo& complejo1, const Complejo& complejo2) {
  double resultado_parte_real =  complejo1.real() * complejo2.real() - complejo1.imaginario() * complejo2.imaginario();
  double resultado_parte_imaginaria = complejo1.real() * complejo2.imaginario() + complejo1.imaginario() * complejo2.real();
  return Complejo{resultado_parte_real, resultado_parte_imaginaria};
}

/**
 * @brief Sobrecarga del operador division (/)
 * @param complejo1 
 * @param complejo2
*/

Complejo operator/(const Complejo& complejo1, const Complejo& complejo2) {
  double divisor = complejo2.real() * complejo2.real() + complejo2.imaginario() * complejo2.imaginario();
  double resultado_parte_real = (complejo1.real() * complejo2.real() + complejo1.imaginario() * complejo2.imaginario()) / divisor; 
  double resultado_parte_imaginaria = (complejo1.imaginario() * complejo2.real() - complejo1.real() * complejo2.imaginario()) / divisor;
  return Complejo{resultado_parte_real, resultado_parte_imaginaria};
}