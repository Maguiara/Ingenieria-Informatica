/**
 * 
 * 
*/
#include "books.h"


double Book::CalcularPrecioConImpuestos(const double impuesto) {
  double porcentaje = impuesto / 100;
  double impuesto_a_sumar = precio() * porcentaje;
  return  precio() + impuesto_a_sumar;
  
}

std::ostream& operator<<(std::ostream& out, const Book& libro_usuario) {
  out << libro_usuario.titulo_ << " " << libro_usuario.anyo_publicacion_ << " " << libro_usuario.precio_;
  return out;
}