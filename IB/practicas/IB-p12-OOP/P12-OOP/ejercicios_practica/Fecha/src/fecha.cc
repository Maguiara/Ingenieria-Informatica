/**
 * Universidad de La Laguna 
 * Escula Superior de Ingenieria y Tecnologia 
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @brief Implementacion de los metodos de la clase Fecha
 * @date 12/12/23
 * 
*/

#include <iostream>
#include "fecha.h"
/**
 * @brief Metodo que determina si la fecha introducida es valida o no
 * @param dia Dia del año a comprobar
 * @param mes Mes del año a comprobar
 * @param anyo Año a comprobar
*/
bool Fecha::EsFechaValida(const int dia, const int mes, const int anyo) {
  if ( mes < 1 || mes > 12) {
    return false;
  }
  bool dia_valido = false;
  switch (mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      dia_valido = (dia >= 1 && dia <= 31);
      break;
    case 4:
    case 6:
    case 9:
    case 11: 
      dia_valido = (dia >= 1 && dia <= 30);
      break;
    case 2: 
      if (anyo % 400 == 0 || (anyo % 4 == 0 && anyo % 100 != 0)) {
        dia_valido = (dia >= 1 && dia <= 29); 
      } else {
        dia_valido = (dia >= 1 && dia <= 28);
      }
      break;
    default: 
      break;
  }
  return dia_valido;
}

/**
 * @brief Comprueba que la fecha sea un año bisiesto
 * @param anyo Año a comprobar
*/
bool Fecha::EsAnyoBisiesto(const int anyo) {
  if (anyo % 400 == 0 || (anyo % 4 == 0 && anyo % 100 != 0)) {
    return true;
  }
  return false;
}


/**
 * @brief Constructor con parametros (solo construye la fecha en caso de que esta sea valida)
 * @param dia Dia del año para la fecha
 * @param mes Mes del año para la fecha 
 * @param anyo Año del calendario para la fecha
*/

Fecha::Fecha(const int dia, const int mes, const int anyo) {
  if (EsFechaValida(dia, mes, anyo)){ 
    if (EsAnyoBisiesto(anyo)) {
      std::cout << "El constructor a sido llamado" << std::endl;
      dia_ = dia;
      mes_ = mes;
      anyo_ = anyo;
    } else {
      std::cout << "El cosntructo no admite esta fecha, se mantienen los valores por defecto de la clase" << std::endl;
    }
  } else {
    std::cout << "La fecha que ha introducido no es valida, se mantienen los valores por defecto de la clase" << std::endl;
  }
}


/**
 * @brief Metodo que imprime la fecha por pantalla
*/
void Fecha::Print() const {
  std::cout << "La fecha introducida es: " << dia() << "/" << mes() << "/" << anyo() << std::endl;

}