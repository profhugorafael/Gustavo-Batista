#ifndef PILHA_H
#define PILHA_H

#include <iostream>

#include "No.h"

using namespace std;

class Pilha {
 private:
  No *topo;
  int tamanho = 0;

 public:
  bool estaVazio();
  void empilhar(int valor);
  int desempilhar();
  void remover(int index);
  int verTopo();
  void mostrarPilha();
};

bool Pilha::estaVazio() {
  return topo == NULL;
}

void Pilha::empilhar(int valor) {
  tamanho++;

  if (estaVazio()) {
    topo = new No(valor);
    return;
  }

  No *novoNo = new No(valor);
  novoNo->prox = topo;
  topo = novoNo;
}

int Pilha::desempilhar() {
  if (estaVazio()) {
    return -1;
  }

  tamanho--;
  bool temApenasUmElemento = topo->prox == NULL;
  int valor = topo->valor;

  // if (temApenasUmElemento) {
  //   topo = NULL;
  // } else {
  //   topo = topo->prox;
  // }

  topo = temApenasUmElemento ? NULL : topo->prox;

  return valor;
}

void Pilha::remover(int index) {
  if (index < 0 || index >= tamanho) {
    cout << "Index excedeu o tamanho" << endl;
    return;
  }

  if (estaVazio()) {
    cout << "Nao possui elementos para remover" << endl;
    return;
  }

  if (tamanho == 1) {
    topo = NULL;
    return;
  }

  if (index == 0) {
    topo = topo->prox;
  }

  No *atual = topo;
  int pos = 0;
  while (pos != index - 1) {
    atual = atual->prox;
  }

  atual->prox = atual->prox->prox;
  // 0 -> 1 -> 2 -> null
}

int Pilha::verTopo() {
  if (estaVazio()) {
    return -1;
  }

  return topo->valor;
}

void Pilha::mostrarPilha() {
  No *atual = topo;

  // 9 -> 6 -> 4 -> 2 -> NULL
  while (atual != NULL) {
    cout << "| " << atual->valor << " |" << endl;
    atual = atual->prox;
  }

  cout << "|___|" << endl;
}

#endif