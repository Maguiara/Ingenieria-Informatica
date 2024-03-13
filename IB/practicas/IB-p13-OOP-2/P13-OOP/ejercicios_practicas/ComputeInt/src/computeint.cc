/**
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 13/12/2023
 * @brief Implementacion de la clase ComputeInt y sus metodos
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include "computeint.h"


void PrintPeogramPorpouse() {
  std::cout << "Programa que dado un numero entero calcula el factorial, la suma de todos los numeros que le preceden," << std::endl;
  std::cout << "compruba si un numero es primo, comprueba que sea primo perfecto y comprueba que dos numeros sean primos entre si" << std::endl;

}

void Usage(int argc, char *argv[]) {
  if (argc == 2) {
    std::string  parametro{argv[1]};
    if (parametro == "--help") {
      std::cout << "Modo de uso: " << argv[0] << " <numero entero> <numero entero>" << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
  if (argc != 3) {
    std::cout << "Ha ejecutado el programa con el numero incorrecto de parametros" << std::endl;
    std::cout << "Para mas informacion, pruebe: " << argv[0] << " --help" << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/**
 * @brief Metodo que calcula el factorial del numero introducido por el usuaio
*/
unsigned long int ComputeInt::ComputeFactorial() const {
  unsigned long int factorial{1};
  for (int i = numero_usuario(); i > 0; --i) {
    factorial *= i;
  }
  return factorial;
}

/**
 * @brief Metodo que realiza la suma de todos los numero que preceden al introducido 
 * 
*/
int ComputeInt::SumSerie () const {
  int suma{0};
  for (int i = 1; i <= numero_usuario(); i++) {
    suma += i;
  }
  return suma;
}

/**
 * 
*/
bool ComputeInt::IsPrime () const {
  if (numero_usuario() <= 1) {
    return false;
  }
  for (int i{2}; i * i <= numero_usuario(); ++i) {
    if (numero_usuario() % i == 0) {
      return false;
    }
  }
  return true;
}

/**
 * 
*/
bool ComputeInt::IsPerfectPrime() const { 
  if (!IsPrime()) {
    return false;
  }
  int numero{numero_usuario()};
  while (true) {
    int suma_digitos{0};
    while (numero != 0) {
      suma_digitos += numero % 10;
      numero /= 10;
    }
    if (!ComputeInt(suma_digitos).IsPrime()) {
      return false;
    }
    if (numero < 10) {
      return true;
    }
    numero = suma_digitos;
  }
}

/**
 * 
*/
int ComputeInt::MaximoComunDivisor(const ComputeInt& otro_numero) const{
  int numero1{numero_usuario()};
  int numero2{otro_numero.numero_usuario()};
  while (numero2 != 0) {
    int temporal = numero2;
    numero2 = numero1 % numero2;
    numero1 = temporal;
  } 
  return numero1;
}

/*
 * 
*/
bool ComputeInt::AreRelativePrime(const ComputeInt& otro_numero) const {
  int MCD = MaximoComunDivisor(otro_numero);
  return MCD == 1;
}
