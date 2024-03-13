/**
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 13/12/2023
 * @brief Declaracion de la clase racional
*/

#ifndef RACIONAL_H
#define RACIONAL_H

#include <iostream>

class Racional {
  public:
  Racional() = default;
  Racional(const int numerador, const int denominador) : numerador_{numerador}, denominador_{denominador} {}
  Racional(const int numerador) : numerador_{numerador}, denominador_{1} {}
  int numerador() const { return numerador_; } //getter
  int denominador() const { return denominador_; } //getterç
  friend std::ostream& operator<<(std::ostream& out, const Racional& numero_racional);
  friend std::istream& operator>>(std::istream& in, Racional& numero_racional);
 
  private:
  int numerador_{0};
  int denominador_{0};
};

Racional operator+(const Racional& numero_1, const Racional& numero_2); 
Racional operator-(const Racional& numero_1, const Racional& numero_2);
Racional operator*(const Racional& numero_1, const Racional& numero_2);
Racional operator/(const Racional& numero_1, const Racional& numero_2);
bool operator<(const Racional& numero_1, const Racional& numero_2);
bool operator>(const Racional& numero_1, const Racional& numero_2);


#endif 