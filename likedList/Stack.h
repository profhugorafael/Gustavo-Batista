#ifndef STACK_H
#define STACK_H

#include "Node.h"

class Stack {
 private:
  Node *head;

 public:
  bool isEmpty() {
    return head == NULL;
  }

  void push(int valor) {
    if (isEmpty()) {
      head = new Node(valor);
      return;
    }
  }
};

#endif