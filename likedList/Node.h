#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node {
 public:
  int valor;
  Node *prox;

  Node(int valor) {
    this->valor = valor;
    this->prox = NULL;
  }
};

#endif