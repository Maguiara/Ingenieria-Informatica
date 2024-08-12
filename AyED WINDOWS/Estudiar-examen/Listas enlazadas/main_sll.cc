// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 3.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 4
// ESTILO: Google C++ Style Guide
// COMENTARIOS: 
// COMPILACIÓN: g++ -g main_sll.cc -o main_sll
// EJECUCIÓN: ./main_sll

#include <iostream>

#include "sll_t.h"

#define N_CHARS 26

using namespace std;

int main(void)
{
  sll_t<char> lista;

  // Inserción de N_CHARS elementos ('a', 'b, 'c' ...) a la lista por el frente
  for (int i = 0; i < N_CHARS; i++)
    lista.push_front(new sll_node_t<char>('a' + i));

  // Impresión de la lista elemento a elemento
  lista.write(cout);
  cout << endl;

  // Extracción de elemento 1 por el frente
  sll_node_t<char>* nodo = lista.pop_front();
  char dato = nodo->get_data();
  delete nodo;

  // Impresión del elemento 1 extraído
  cout << "Dato 1: " << dato << endl;

  // Extracción de elemento 2 por el frente
  nodo = lista.pop_front();
  dato = nodo->get_data();
  delete nodo;

  // Impresión del elemento 2 extraído
  cout << "Dato 2: " << dato << endl;

  // Extracción de elemento 3 por el frente
  nodo = lista.pop_front();
  dato = nodo->get_data();
  delete nodo;

  // Impresión del elemento 3 extraído
  cout << "Dato 3: " << dato << endl;

  // Impresión de la lista elemento a elemento
  lista.write(cout);
  cout << endl;

  // Búsqueda e impresión del elemento 4 con valor 'n'
  nodo = lista.search('n');
  dato = nodo->get_data();
  cout << "Dato 4: " << dato << endl; 

  // Extracción del elemento siguiente al de valor 'n' localizado anteriormente
  nodo = lista.erase_after(nodo);
  delete nodo;
  cout << "Se ha extraído la letra 'm'" << endl;

  // Impresión de la lista elemento a elemento
  lista.write(cout);
  cout << endl;	

  //Modificaciones propuestas

  //Eliminar y liberar el ultimo nodo de una lista enlazada

  dato = lista.find_last();
  cout << "El ultimo nodo de la lista que ha sido liberado es: " << dato << endl;
  lista.write(cout);
  cout << endl;

  //Intercambiar de posicion el primer y ultimo elemento de la lista

  cout << "Intercambiando el primer y ultimo elemento" << endl;
  lista.intercambia();
  lista.write(cout);
  cout << endl;

  lista.intercambia();

  //Duplicar cada elemento y meterlo en la lista

  lista.duplicar();
  cout << "Duplicando cada elemento..." << endl;
  lista.write(cout);
  cout << endl;

  lista.eliminar_pares();
  cout << "Eliminando los elementos de las posiciones pares..." << endl;
  lista.write(cout);
  cout << endl;

  sll_t<char> lista_impares = lista.mover_impares();
  cout << "Moviendo los elementos de las posiciones impares..." << endl;
  cout << "Lista original: "; 
  lista.write(cout);
  cout << endl;
  cout << "Lista de elementos impares: ";
  lista_impares.write(cout);
  cout << endl;
  return 0;
}
