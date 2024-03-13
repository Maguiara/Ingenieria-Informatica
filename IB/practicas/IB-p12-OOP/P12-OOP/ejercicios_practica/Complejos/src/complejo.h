/**
 * Universida de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 09/12/23
 * @brief Declaracion de la clase complejo y sus metodos 
*/

#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>

/**
 * Clase Complejo
 * Representa un numero complejo usando su parte real y su parte imaginaria
*/
class Complejo {

  public:
    Complejo();
    Complejo(const double real, const double imaginario);
    double real() const {return real_;}
    double imaginario() const {return imaginario_;}
    friend Complejo operator+(const Complejo &complejo1, const Complejo &complejo2);
    friend Complejo operator-(const Complejo &complejo1, const Complejo &complejo2);
    friend Complejo operator*(const Complejo &complejo1, const Complejo &complejo2);
    friend Complejo operator/(const Complejo &complejo1, const Complejo &complejo2);
    friend std::ostream& operator<<(std::ostream &out, const Complejo &complejo);
    

  private:
    double real_{0}; 
    double imaginario_{0};
};

#endif