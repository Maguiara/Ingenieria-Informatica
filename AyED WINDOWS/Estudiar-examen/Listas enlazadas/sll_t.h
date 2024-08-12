// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 3.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 4
// ESTILO: Google C++ Style Guide
// COMENTARIOS: 

#ifndef SLLT_H_
#define SLLT_H_

#include <iostream>
#include <cassert>

#include "sll_node_t.h"

// Clase para almacenar una lista simplemente enlazada
template <class T> class sll_t {
 public:
  // constructor
  sll_t(void) : head_(NULL) {}

  // destructor
  ~sll_t(void);

  // getters
  sll_node_t<T>* get_head(void) const { return head_; };
  
  bool empty(void) const;

  // operaciones
  void push_front(sll_node_t<T>*);
  sll_node_t<T>* pop_front(void);

  void insert_after(sll_node_t<T>*, sll_node_t<T>*);
  sll_node_t<T>* erase_after(sll_node_t<T>*);

  sll_node_t<T>* search(const T&) const;

  //Modificaciones propuestas
  T find_last();
  void intercambia();
  void duplicar();
  void eliminar_pares();
  sll_t<T> mover_impares();

  // E/S
  std::ostream& write(std::ostream& = std::cout) const;

 private:
  sll_node_t<T>* head_;
};


// destructor
template <class T> sll_t<T>::~sll_t(void) {
  while (!empty()) {
    sll_node_t<T>* aux = head_;
    head_ = head_->get_next();
    delete aux;
  }
}

// Comprobar si lista vacía
template <class T> bool sll_t<T>::empty(void) const {
  return head_ == NULL;
}

// operaciones
template <class T> void sll_t<T>::push_front(sll_node_t<T>* n) {
  assert(n != NULL);

  n->set_next(head_);
  head_ = n;
}

template <class T> sll_node_t<T>* sll_t<T>::pop_front(void) { 
  assert(!empty());
  sll_node_t<T>* aux = head_;
  head_ = head_->get_next();
  aux->set_next(NULL);

  return aux;
}

template <class T> void sll_t<T>::insert_after(sll_node_t<T>* prev,
					       sll_node_t<T>* n) {
  assert(prev != NULL && n != NULL);

  n->set_next(prev->get_next());
  prev->set_next(n);
}

template <class T> sll_node_t<T>* sll_t<T>::erase_after(sll_node_t<T>* prev) { 
  assert(!empty());
  assert(prev != NULL);
  sll_node_t<T>* aux = prev->get_next();
  
  assert(aux != NULL);
  prev->set_next(aux->get_next());
  aux->set_next(NULL);

  return aux;
}

template <class T> sll_node_t<T>* sll_t<T>::search(const T& d) const {
  sll_node_t<T>* aux = head_;
  while ((aux != NULL) && (aux->get_data() != d))
    aux = aux->get_next();
    
  return aux;
}

// Modidicaciones propuestas

  template <class T> T sll_t<T>::find_last() {
    
    sll_node_t<T>* prev = NULL;
    sll_node_t<T>* aux = get_head();
    while (aux->get_next() != NULL) {
      prev = aux;
      aux = aux->get_next();
    }
    sll_node_t<T>* node;
    node = erase_after(prev);
    T data = node->get_data();
    delete node;

    return data;
  }

  //Intercambiar la posicion del primer y segundo nodo
  template <class T> void sll_t<T>::intercambia() {
    push_front(erase_after(get_head()));
  }

  // Insertar una copia de cada elemento en la lista

  template <class T> void sll_t<T>::duplicar() {
    assert (!empty());
    sll_node_t<T>* aux = get_head();
    T dato;
    while (aux != NULL) {
      dato = aux->get_data();
      insert_after(aux, new sll_node_t<T>(aux->get_data()));
      aux = aux->get_next()->get_next();
    }
  }

  template <class T> void sll_t<T>::eliminar_pares() {
    sll_node_t<T>* aux = get_head();
    T posicion{0};
    while(aux != NULL && aux->get_next() != NULL) {
      delete erase_after(aux); // Elimina y libera el nodo
      aux = aux->get_next(); // Itera una sola vez, la posicion par ya fue borrada.
    }

  }

  template <class T> sll_t<T> sll_t<T>::mover_impares() {
    sll_t<T> lista_impares;
    lista_impares.push_front(pop_front());

    sll_node_t<T>* aux = get_head();
    while (aux != NULL and aux->get_next() != NULL){
      lista_impares.push_front(erase_after(aux));
      aux = aux->get_next();
    }

    return lista_impares;
  }



// E/S
template <class T> std::ostream& sll_t<T>::write(std::ostream& os) const {
  sll_node_t<T>* aux = head_;

  while (aux != NULL) {
    aux->write(os);
    aux = aux->get_next();
  }
  return os;
}

#endif  // SLLT_H_
