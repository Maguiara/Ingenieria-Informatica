/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @brief Este programa se encarga de leer un archivo de texto con los datos de los libros y mostrarlos por pantalla
 * @date 31 12 2023
*/

#ifndef BOOKS_H
#define BOOKS_H
#include <iostream>
#include <string>

class Book {
 public:
  Book() = default;
  Book(const std::string& titulo, int anyo_publicacion, double precio) : titulo_{titulo}, anyo_publicacion_{anyo_publicacion}, precio_{precio} {}
  std::string titulo() const { return titulo_; }
  int anyo_publicacion() const { return anyo_publicacion_; }
  double precio() const { return precio_; }
  double CalcularPrecioConImpuestos(const double impuesto);
  friend std::ostream& operator<<(std::ostream& out, const Book& libro_usuario); 

 private:
  std::string titulo_{""};
  int anyo_publicacion_{0};
  double precio_{0.0};
};

#endif 