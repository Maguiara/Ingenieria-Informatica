// AUTOR: Raúl González García
// FECHA: 28/02/2023
// EMAIL: alu0101470320@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 2
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#pragma once

#include <iostream>
#include <cassert>

#include "vector_t.hpp"

using namespace std;

template<class T>
class matrix_t
{
public:
  matrix_t(const int = 0, const int = 0);
  ~matrix_t();
  
  void resize(const int, const int);
  
  // getters
  int get_m(void) const;
  int get_n(void) const;
  
  // getters-setters
  T& at(const int, const int);
  T& operator()(const int, const int);
  
  // getters constantes
  const T& at(const int, const int) const;
  const T& operator()(const int, const int) const;
  
  // operaciones y operadores
  void multiply(const matrix_t<T>&, const matrix_t<T>&);
  void sum(const matrix_t<T>&, const matrix_t<T>&);
  void substract(const matrix_t<T>&, const matrix_t<T>&);
  void traspuesta(void);
  void kmultiply(const double, const matrix_t<T>&);
  void get_top_triangle();
  void get_bottom_triangle();

  void write(ostream& = cout) const;
  void read(istream& = cin);

private:
  int m_, n_; // m_ filas y n_ columnas
  vector_t<T> v_;
  
  int pos(const int, const int) const;
};



template<class T>
matrix_t<T>::matrix_t(const int m, const int n) { 
  m_ = m;
  n_ = n;
  v_.resize(m_ * n_);
}



template<class T>
matrix_t<T>::~matrix_t()
{}



template<class T>
void
matrix_t<T>::resize(const int m, const int n) {
  assert(m > 0 && n > 0);
  m_ = m;
  n_ = n;
  v_.resize(m_ * n_);
}



template<class T>
inline int
matrix_t<T>::get_m() const {
  return m_;
}



template<class T>
inline int
matrix_t<T>::get_n() const {
  return n_;
}



template<class T>
T&
matrix_t<T>::at(const int i, const int j) {
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return v_[pos(i, j)];
}



template<class T>
T&
matrix_t<T>::operator()(const int i, const int j) {
  return at(i, j);
}



template<class T>
const T&
matrix_t<T>::at(const int i, const int j) const {
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return v_[pos(i, j)];
}



template<class T>
const T&
matrix_t<T>::operator()(const int i, const int j) const {
  return at(i, j);
}



template<class T>
void
matrix_t<T>::write(ostream& os) const { 
  os << get_m() << "x" << get_n() << endl;
  for (int i = 1; i <= get_m(); ++i) {
    for (int j = 1; j <= get_n(); ++j)
      os << at(i, j) << "\t";
    os << endl;
  }
  os << endl;
}



template<class T>
void
matrix_t<T>::read(istream& is) {
  is >> m_ >> n_;
  resize(m_, n_);
  for (int i = 1; i <= get_m(); ++i)
    for (int j = 1; j <= get_n(); ++j)
      is >> at(i, j);
}


template<class T>
inline
int
matrix_t<T>::pos(const int i, const int j) const {
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return (i - 1) * get_n() + (j - 1);
}



// FASE III: producto matricial

//MODIFICACIONES


template<class T>
void
matrix_t<T>::multiply(const matrix_t<T>& A, const matrix_t<T>& B) {
  assert(A.get_n() == B.get_m());
  resize(A.get_m(), B.get_n());
  for (int i = 1; i <= A.get_m(); i++) {
    for (int j = 1; j <= B.get_n(); j++) {
      at(i, j) = 0;
      for (int k = 1; k <= B.get_m(); k++)
        at(i, j) += A.at(i, k) * B.at(k, j);
    }
  }
}



template<class T>
void
matrix_t<T>::sum(const matrix_t<T>& A, const matrix_t<T>& B) {
  assert((A.get_m() == B.get_m()) && (A.get_n() == B.get_n()));
  resize(A.get_m(), B.get_n());
  for (int i{1}; i <= get_m(); i++)
    for (int j{1}; j <= get_n(); j++)
      at(i, j) = A.at(i, j) + B.at(i, j);
}



template<class T>
void
matrix_t<T>::substract(const matrix_t<T>& A, const matrix_t<T>& B) {
  assert((A.get_m() == B.get_m()) && (A.get_n() == B.get_n()));
  resize(A.get_m(), B.get_n());
  for (int i{1}; i <= get_m(); i++)
    for (int j{1}; j <= get_n(); j++)
      at(i, j) = A.at(i, j) - B.at(i,j);
}



template<class T>
void
matrix_t<T>::traspuesta() {
  matrix_t<T> aux(get_n(), get_m());
  for (int i{1}; i <= get_m(); i++)
    for (int j{1}; j <= get_n(); j++)
      aux.at(j, i) = at(i, j);
  resize(aux.get_m(), aux.get_n());
  for (int i{1}; i <= aux.get_m(); i++)
    for (int j{1}; j <= aux.get_n(); j++)
      at(i, j) = aux.at(i, j);
}


template<class T>
void
matrix_t<T>::kmultiply(const double k, const matrix_t<T>& A) {
  resize(A.get_m(), A.get_n());
  for (int i{1}; i <= get_m(); i++)
    for (int j{1}; j <= get_n(); j++)
      at(i, j) = k * A.at(i, j);
}


template<class T>
void matrix_t<T>::get_top_triangle() { 
  int filas = get_m();
  int columnas = get_n();
  std::cout << "***TRIANGULO SUPERIOR***\n";
  for (int i{1}; i <= filas && columnas > i; i++, columnas--) {
    for (int j{i}; j <= columnas; j++) 
      std::cout << at(i, j) << "\t";
    std::cout << std::endl;
    for (int k{0}; k < i; k++)
      std::cout << "\t";
  }
}



template<class T>
void matrix_t<T>::get_bottom_triangle() { 
  int filas = get_m();
  int columnas = get_n();
  int x{1};
  std::cout << "***TRIANGULO INFERIOR***\n";
  for (int i{filas}; i > 0; i--, columnas--) {
    for (int j{x}; j <= columnas; j++) 
      std::cout << at(i, j) << "\t";
    std::cout << std::endl;
    x++;
  }
}