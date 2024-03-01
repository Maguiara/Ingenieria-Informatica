// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 2
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#pragma once

#include <iostream>
#include <cassert>

using namespace std;

template<class T>
class vector_t {
public:
  vector_t(const int = 0);
  ~vector_t();
  
  void resize(const int);
  
  // getters
  T get_val(const int) const;
  int get_size(void) const;
  
  // setters
  void set_val(const int, const T);
  
  // getters-setters
  T& at(const int);
  T& operator[](const int);
  
  // getters constantes
  const T& at(const int) const;
  const T& operator[](const int) const;

  void write(ostream& = cout) const;
  void read(istream& = cin);

  //Modificacion viernes
  void rotacion_circular();


private:
  T *v_;
  int sz_;
  
  void build(void);
  void destroy(void);
};



template<class T>
vector_t<T>::vector_t(const int n)
{ sz_ = n;
  build();
}



template<class T>
vector_t<T>::~vector_t()
{
  destroy();
}



template<class T>
void
vector_t<T>::build()
{
  v_ = NULL;
  if (sz_ != 0) {
    v_ = new T[sz_];
    assert(v_ != NULL);
  }
}



template<class T>
void
vector_t<T>::destroy()
{
  if (v_ != NULL) {
    delete[] v_;
    v_ = NULL;
  }
  sz_ = 0;
}



template<class T>
void vector_t<T>::resize(const int n) {
  destroy();
  sz_ = n;
  build();
}



template<class T>
inline T vector_t<T>::get_val(const int i) const {
  assert(i >= 0 && i < get_size());
  return v_[i];
}



template<class T>
inline int vector_t<T>::get_size() const {
  return sz_;
}



template<class T>
void vector_t<T>::set_val(const int i, const T d) {
  assert(i >= 0 && i < get_size());
  v_[i] = d;
}



template<class T>
T& vector_t<T>::at(const int i) {
  assert(i >= 0 && i < get_size());
  return v_[i];
}



template<class T>
T& vector_t<T>::operator[](const int i) {
  return at(i);
}



template<class T>
const T& vector_t<T>::at(const int i) const {
  assert(i >= 0 && i < get_size());
  return v_[i];
}



template<class T>
const T& vector_t<T>::operator[](const int i) const {
  return at(i);
}



template<class T> 
void vector_t<T>::write(ostream& os) const { 
  os << get_size() << ":\t";
  for (int i = 0; i < get_size(); i++)
    os << at(i) << "\t";
  os << endl;
}



template<class T> 
void vector_t<T>::read(istream& is) {
  is >> sz_;
  resize(sz_);
  for (int i = 0; i < sz_; ++i)
    is >> at(i);
}


// FASE II: producto escalar
template<class T> T scal_prod(const vector_t<T>& v, const vector_t<T>& w) {
  T resultado = T();
  assert(v.get_size() == w.get_size());
  for (int i{0}; i < v.get_size(); ++i) {
    resultado = resultado + v.at(i) * w.at(i);
  }
  return resultado;
}



double scal_prod(const vector_t<rational_t>& v, const vector_t<rational_t>& w) {
  rational_t resultado_double_temp{0};
  double resultado_double{0.0};
  assert(v.get_size() == w.get_size());
  for (int i{0}; i < v.get_size(); ++i) {
    resultado_double_temp = v.at(i) * w.at(i);
    resultado_double = resultado_double + resultado_double_temp.value();
  }
  return resultado_double;
}

template<class T>
void vector_t<T>::rotacion_circular() {
  T temporal = at(get_size() - 1);
  for (int i = get_size()- 1; i > 0; --i) {
    at(i) = at(i - 1);
  }
  at(0) = temporal;
}