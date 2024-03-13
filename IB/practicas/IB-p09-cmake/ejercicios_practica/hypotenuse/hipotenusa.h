/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Marco Aguiar Álvarez alu0101620961@gmail.com
  * @date Nov 2 2023
  * @brief El programa realiza el calculo de una funcion matematica 
  *        dada que contiene hasta 3 parametros.
  * @bug There are no known bugs
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */

#pragma once
void Usage(int argc, char *argv[]);
double SumaCatetos(const double lado1, const double lado2);
double CalcularHipotenusa(const double suma_catetos, const double EPSILON = 1e-7);
void PrintResult(const double lado1, const double lado2, const double hipotenusa);
