// AUTOR:  Marco Aguiar Álvarez 
// FECHA: 06/02/24
// EMAIL: alu0101620961@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#include "rational_t.hpp"

rational_t::rational_t(const int n, const int d) {
  assert(d != 0);
  num_ = n, den_ = d;
}

// pauta de estilo [87]: 3 líneas de separación entre métodos

int rational_t::get_num() const {
  return num_;
}



int rational_t::get_den() const {
  return den_;
}


  
void rational_t::set_num(const int n) {
  num_ = n;
}


  
void rational_t::set_den(const int d) {
  assert(d != 0);
  den_ = d;
}



double rational_t::value() const { 
  return double(get_num()) / get_den();
}


// comparaciones
bool rational_t::is_equal(const rational_t& r, const double precision) const { 
  return (fabs(value() - r.value()) < precision);
}



bool rational_t::is_greater(const rational_t& r, const double precision) const {
  return (value() - r.value() < precision);
}



bool rational_t::is_less(const rational_t& r, const double precision) const {
  return (r.value() - value() < precision);
}


 //operaciones
rational_t rational_t::add(const rational_t& r) {
  int numerador_suma = (get_num() * r.get_den()) + (get_den() * r.get_num());
  int denominador_suma = get_den() * r.get_den();
  return rational_t(numerador_suma, denominador_suma);
}



//rational_t
//rational_t::substract(const rational_t& r)
//{
//}



//rational_t
//rational_t::multiply(const rational_t& r)
//{
//}



//rational_t
//rational_t::divide(const rational_t& r)
//{
//}



// E/S
void rational_t::write(ostream& os) const {
   if (get_num() < 0 && get_den() < 0) {
    os << fabs(get_num()) << "/" << fabs(get_den()) << " = " << value() << endl; 
  } else {
  os << get_num() << "/" << get_den() << " = " << value() << endl;
  }
}



void 
rational_t::read(istream& is) {
  cout << "¿Numerador? ";
  is >> num_;
  cout << "¿Denominador? ";
  is >> den_;
  assert(den_ != 0);
}
