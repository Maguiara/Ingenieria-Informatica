/**
 * Universidad de La Laguna
 * Escuela superior de Ingenieria y Tecnologia 
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 13/12/23
 * @brief Implementacion de la clase Cilindro y todos sus metodos
*/

#include <cmath>
#include "P12-cilindro.h"

/**
 * @brief Constructor con parametros de la clase cilindro
 * @param altura Altura que el usuario introduce para su cilindro
 * @param radio Radio que el usuario introduce para su cilindro
*/
Cilindro::Cilindro(const double altura, const double radio) : altura_{altura}, radio_{radio} {}


/**
 * @brief Metodo que calcula la superficie de un cilindro que introduzca el usuario
 * @param cilindro_usuario Cilindro construido con los parametros pasados por el usuario
*/
double Cilindro::SuperficieCilindro(const Cilindro& cilindro_usuario) const {
  return ((cilindro_usuario.radio() + cilindro_usuario.altura()) * 2.0 * M_PI * cilindro_usuario.radio());
}


/**
 * @brief Metodo que calcula el volumen de un cilindro que introduzca el usuario
 * @param cilindro_usuario Cilindro construido con los parametro pasados por el usuario
*/
double Cilindro::VolumenCilindro(const Cilindro& cilindro_usuario) const {
  return (M_PI * cilindro_usuario.radio() * cilindro_usuario.radio() * cilindro_usuario.altura());
}