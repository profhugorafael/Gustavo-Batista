#ifndef NO_H
#define NO_H

#include <iostream>

class No {
 public:
  int valor;
  No* prox;

  No(int valor) {
    this->valor = valor;
    this->prox = NULL;
  }
};

#endif