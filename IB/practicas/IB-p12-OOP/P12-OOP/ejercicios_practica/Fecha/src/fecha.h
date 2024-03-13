/**
 * Universidad de La Laguna 
 * Escula Superior de Ingenieria y Tecnologia 
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @brief Declaracion de la clase Fecha y sus metodos
 * @date 12/12/23
 * 
*/

#ifndef FECHA_H
#define FECHA_H

/**
 * @class Fecha 
 * @brief Clase que crea una fecha y solo permite crearla en caso de que se cumpla que sea bisiesto el año 
 *
*/
class Fecha {
  public:
  Fecha() = default;
  Fecha(const int dia, const int mes, const int anyo); 
  int dia() const { return dia_; } //getters 
  int mes() const { return mes_; } // getters 
  int anyo() const { return anyo_; } //getters 
  bool EsFechaValida(const int dia, const int mes, const int anyo);
  bool EsAnyoBisiesto(const int anyo);
  void Print() const; 

  private:
  int dia_{0};
  int mes_{0};
  int anyo_{0};
};

#endif