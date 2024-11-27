#include <iostream>

#include "HashTable.h"

using namespace std;

int main() {
  HashTable* hashTable = new HashTable();

  hashTable->insert(21, "Rio de Janeiro");
  hashTable->insert(21, "Sao Pedro da Aldeia");

  hashTable->insert(11, "Sao Paulo");
  hashTable->insert(11, "Sao Jose Dos Campos");
  hashTable->insert(11, "Ribeirao Preto");

  hashTable->insert(85, "Fortaleza");
  hashTable->insert(84, "Rio Grande do Norte");

  hashTable->display();
}