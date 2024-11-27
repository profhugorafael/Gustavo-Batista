#ifndef HASHTABLE_H
#define HASHTABLE_H
#define TABLE_SIZE 10

#include <string.h>

#include <iostream>

#include "Node.h"

using namespace std;

class HashTable {
 private:
  Node* table[TABLE_SIZE];

  int hash(int key) {
    return key % TABLE_SIZE;
  }

 public:
  void insert(int key, const string& value) {
    int index = hash(key);
    Node* newNode = new Node(key, value);

    if (table[index] == NULL) {
      table[index] = newNode;
      return;
    }

    Node* current = table[index];

    while (current->next != NULL) {
      current = current->next;
    }

    current->next = newNode;
  }

  void display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
      cout << "Bucket " << i << ": ";

      Node* current = table[i];
      while (current != NULL) {
        cout << "{ key: " << current->key << ", value: " << current->value << "} -> ";
        current = current->next;
      }

      cout << "NULL" << endl;
    }
  }
};

#endif