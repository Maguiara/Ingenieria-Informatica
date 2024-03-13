/**
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 13/12/2023
 * @brief Declaracion de la clase ComputeInt
*/


#ifndef COMPUTEINT_H
#define COMPUTEINT_H

void PrintPeogramPorpouse();
void Usage(int argc, char *Argc[]);

class ComputeInt {
  public:
  ComputeInt() = default;
  ComputeInt (const int entero_usuario) : numero_usuario_{entero_usuario} {}
  int numero_usuario() const { return numero_usuario_; } // getter
  unsigned long int ComputeFactorial() const;
  int SumSerie() const;
  bool IsPrime() const;
  bool IsPerfectPrime() const;
  int MaximoComunDivisor(const ComputeInt& otro_numero) const;
  bool AreRelativePrime(const ComputeInt& otro_numero) const;

  private: 
    int numero_usuario_{0};  
};



#endif