/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
  * @date Nov 02 2023
  * @brief Archivo para declarar las funciones a utilizar
  * @bug There are no known bugs
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */


#pragma once
void Usage(int argc, char *arv[]);
bool ComprobacionIntervalo(int inicio_intervalo, int final_intervalo);
int CalculoNumeroAleatorio(int inicio_intervalo, int final_intervalo, bool comprobacion);
void PrintResult( const int numero_aleatorio);
