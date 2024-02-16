/**
 * AUTOR: Marco Aguiar Álvarez
 * FECHA: 06/02/24 
 * EMAIL: alu0101620961@ull.edu.es
 * VERSION: 1.0
 * ASIGNATURA: Algoritmos y Estructuras de Datos
 * PRÁCTICA Nº: 1
 * COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
 *                "C++ Programming Style Guidelines"
 *             https://geosoft.no/development/cppstyle.html
 */


#pragma once

#include <iostream>
#include <cassert>
#include <cmath>
#include <algorithm>

# define EPSILON 1e-6

using namespace std;

class rational_t {
public:
  rational_t(const int = 0, const int = 1);
  ~rational_t() {}
  
  // getters
  int get_num() const;
  int get_den() const;
  
  // setters
  void set_num(const int);
  void set_den(const int);

  double value(void) const;

  // FASE II
   bool is_equal(const rational_t&, const double precision = EPSILON) const;
   bool is_greater(const rational_t&, const double precision = EPSILON) const;
   bool is_less(const rational_t&, const double precision = EPSILON) const;
  
  // FASE III
   rational_t add(const rational_t&);
   rational_t substract(const rational_t&);
   rational_t multiply(const rational_t&);
   rational_t divide(const rational_t&);
  
  
  void write(ostream& = cout);
  void read(istream& = cin);

  // Calcular fraccion irreducible
  int gcd(int, int);
  
private:
  int num_, den_;
};
