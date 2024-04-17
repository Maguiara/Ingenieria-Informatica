// AUTOR:  Marco Aguiar Álvarez
// FECHA: 
// EMAIL: 
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 5
// ESTILO: Google C++ Style Guide
// COMENTARIOS: Clase RPN (Reverse Polish Notation)

#ifndef RPNT_H_
#define RPNT_H_

#include <iostream>
#include <cctype>
#include <cmath>
//#include <cstdlib>

#include "queue_l_t.h"

// Clase RPN (Reverse Polish Notation)
template <class T> class rpn_t {
 public:
  // constructor
 rpn_t(void) : stack_() {}

  // destructor
  ~rpn_t() {}

  // operaciones
  const int evaluate(queue_l_t<char>&);

 private: 
  T stack_;
  void operate_(const char operador);
  T stack_parcial;
};


// operaciones
template<class T> const int rpn_t<T>::evaluate(queue_l_t<char>& q) {
  while (!q.empty()) 	{
    char c = q.front();
    
    q.pop();
    std::cout << "Sacamos de la cola un carácter: " << c;

    if (isdigit(c)) {
      int i = c - '0';
      stack_.push(i);
      std::cout << " (es un dígito) " << std::endl
		<< "   Lo metemos en la pila..." << std::endl;
    stack_.write();
    } else {
      std::cout << " (es un operador)" << std::endl;
      operate_(c);
      stack_.write();
    }
  }
  std::cout << "Resultados parciales: " << std::endl;
  stack_parcial.write();
  return stack_.top(); 
}

template<class T> void rpn_t<T>::operate_(const char c) {
  assert(c == '+' || c == '-' || c == '*' || c == '/');

  std::cout << "   Sacamos de la pila un operando: ";
  int second_operand = stack_.top();
  stack_.pop();
  std::cout << second_operand << std::endl;

  std::cout << "   Sacamos de la pila otro operando: ";
  int first_operand = stack_.top();
  stack_.pop();
  std::cout << first_operand << std::endl;

  int result;
  switch (c) {
    case '+':
      result = first_operand + second_operand;
      break;
    case '-':  
      result =  first_operand - second_operand;
      break;
    case '*':
      result = first_operand * second_operand;
      break;
    case '/':
      result = first_operand / second_operand;
      break;
    case '^':
      result = pow(first_operand, second_operand);
      break;
    case 'r':
       result = sqrt(first_operand);
      break;
    case 'l':
      result = log2(first_operand);
      break;
    case 'c': 
      result =  pow(first_operand, 2);
      break;
  }

  stack_.push(result);
  stack_parcial.push(result);
  std::cout << "   Metemos en la pila el resultado: " << result << std::endl;
  std::cout << "   Metemos en la pila parcial el resultado parcial: " << result << std::endl;
}

 
#endif  // RPNT_H_
