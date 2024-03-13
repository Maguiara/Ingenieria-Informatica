/**
 * 
 * 
*/

#include <iostream>
#include <cstdlib>
#include "computeint.h"

int main (int argc, char* argv[]) {
  PrintPeogramPorpouse();
  Usage(argc, argv);
  ComputeInt numero_usuario1{std::stoi(argv[1])};
  ComputeInt numero_usuario2{std::stoi(argv[2])};
  std::cout << numero_usuario1.ComputeFactorial() << std::endl;
  std::cout << numero_usuario1.SumSerie() << std::endl;
  std::cout << numero_usuario1.IsPrime() << std::endl;
  std::cout << numero_usuario1.IsPerfectPrime() << std::endl;
  numero_usuario1.MaximoComunDivisor(numero_usuario2);
  std::cout << numero_usuario1.AreRelativePrime(numero_usuario2) << std::endl;
}