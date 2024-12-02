#ifndef HASH_H
#define HASH_H

#include "No.h"

using namespace std;

class Hash {
 private:
  No** lista;
  int tamanho;

  int hash(int valor) {
    return valor % tamanho;
  }

 public:
  Hash(int tamanho) {
    this->tamanho = tamanho;
    this->lista = new No*[tamanho];

    for (int i = 0; i < tamanho; i++) {
      lista[i] = NULL;
    }
  }

  void inserir(int valor) {
    int index = hash(valor);

    if (lista[index] == NULL) {
      lista[index] = new No(valor);
      return;
    }

    // lista[index] -> (3)
    // copy -> (2) -> (5) -> null
    No* restante = lista[index];
    lista[index] = new No(valor);
    lista[index]->prox = restante;
  }

  void remover(int valor) {
    int index = hash(valor);

    if (lista[index] == NULL) {
      return;
    }

    // (3) -> (2) -> (5) -> NULL
    if (lista[index]->valor == valor) {
      lista[index] = lista[index]->prox;
      return;
    }

    No* aux = lista[index];

    while (aux->prox != NULL) {
      if (aux->prox->valor == valor) {
        aux->prox = aux->prox->prox;
        break;
      }

      aux = aux->prox;
    }
  }

  void display() {
    for (int i = 0; i < tamanho; i++) {
      No* atual = lista[i];

      cout << "[" << i << "] -> ";

      while (atual != NULL) {
        cout << atual->valor << " -> ";
        atual = atual->prox;
      }

      cout << "null" << endl;
    }
  }
};

#endif