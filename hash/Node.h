#ifndef NODE_H
#define NODE_H

#include <string>

using namespace std;

class Node {
 public:
  int key;
  string value;
  Node *next;

  Node(int key, string value) {
    this->key = key;
    this->value = value;
    this->next = NULL;
  }
};

#endif