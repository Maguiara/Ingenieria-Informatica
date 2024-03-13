/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief Cada nuevo término de la serie de Fibonacci se genera sumando los dos anteriores. 
 *        Comenzando con 0 y 1, los primeros 10 términos serán: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
 *        Desarrolle en C++ un programa que calcule la suma de todos los términos de valor par 
 *        de la serie que sean menores que 1000.
 * @see https://docs.google.com/document/d/1-3hTIVf8tPrbn9u0vs0Cm2IGyX1XBgv8hReVU0KOSUQ/edit?usp=sharing
 * @see stoi http://www.cplusplus.com/reference/string/stoi/
 * An Object Oriented Version of the program:
 * @see https://stackoverflow.com/questions/21360694/sum-of-even-fibonacci-numbers-under-1000
 *
 */

#include <iostream>

void PrintProgramPorpouse();

const std::string kHelpText = 
"Para usar correctamente este programa se necesita de 3 numeros: \
\n Un primer numero que representa el tamaño del vector.\n Un segundo numero que represneta el minimo de ese vector. \n Un tercer numero que representa el maximo de \
dicho vector. "; 
void Usage (int argc, char *argv[]);
