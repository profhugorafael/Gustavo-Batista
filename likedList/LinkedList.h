#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

#include "Node.h"

using namespace std;

class LinkedList {
 private:
  Node *head;

 public:
  bool isEmpty() {
    return head == NULL;
  }

  void add(int valor) {
    if (isEmpty()) {
      head = new Node(valor);
      return;
    }

    Node *current = head;
    while (current->prox != NULL) {
      current = current->prox;
    }

    current->prox = new Node(valor);
  }

  void print() {
    Node *current = head;

    cout << "HEAD -> ";

    while (current != NULL) {
      cout << current->valor << " -> ";
      current = current->prox;
    }

    cout << "NULL" << endl;
  }
};

#endif