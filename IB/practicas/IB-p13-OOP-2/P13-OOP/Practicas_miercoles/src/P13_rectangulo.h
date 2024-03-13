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

#ifndef P13_RECTANGULO_H
#define P13_RECTANGULO_H
#include <iostream>

class Rectangulo {
 public:
  Rectangulo() = default;
  Rectangulo(const int base, const int altura) : base_{base}, altura_{altura} {}
  int base() const { return base_; }
  int altura() const { return altura_; } 
  friend std::ostream& operator<<(std::ostream& out, const Rectangulo& rectangulo_usuario);
  friend std::istream& operator>>(std::istream& in, Rectangulo& rectangulo_usuario);
  bool operator==(const Rectangulo& rectangulo_usuario2);

 private:
  int base_{0};
  int altura_{0};
};


#endif