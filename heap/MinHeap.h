#ifndef MINHEAP_H
#define MINHEAP_H

#include <iostream>

using namespace std;

class MinHeap {
 private:
  int *heap;
  int capacidade;
  int tamanho;

  void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
  }

  bool isPowerOfTwo(unsigned int n) {
    return n && !(n & (n - 1));
  }

  void heapifyUp(int index) {
    int pai = index / 2;

    if (index > 1 && heap[pai] > heap[index]) {
      swap(heap[pai], heap[index]);
      heapifyUp(pai);
    }
  }

  void heapifyDown(int index) {
    int pai = index;
    int dir = 2 * pai;
    int esq = 2 * pai + 1;

    int menor = pai;

    // comparo o pai com a esquerda
    if (esq <= tamanho && heap[esq] < heap[menor]) {
      menor = esq;
    }

    // comparo o resultado de cima com a direita
    if (dir <= tamanho && heap[dir] < heap[menor]) {
      menor = dir;
    }

    // se o pai perdeu, sigo para baixo ajeitando os filhos
    if (menor != pai) {
      swap(heap[pai], heap[menor]);
      heapifyDown(menor);
    }
  }

 public:
  MinHeap(int capacidade) {
    heap = new int[capacidade + 1];
    this->capacidade = capacidade;
    tamanho = 0;
  }

  void inserir(int elemento) {
    if (tamanho >= capacidade) {
      cout << "excedeu o tamanho da heap" << endl;
      return;
    }

    tamanho++;
    heap[tamanho] = elemento;
    heapifyUp(tamanho);
  }

  void display() {
    // 1 2 3 4 5 6 7
    for (int i = 1; i <= tamanho; i++) {
      if (isPowerOfTwo(i)) {
        cout << endl;
      }

      cout << heap[i] << " ";
    }
  }

  int getMin() {
    if (tamanho == 0) {
      throw runtime_error("a heap esta vazia");
    }

    return heap[1];
  }

  void removeMin() {
    if (tamanho == 0) {
      cout << "a Heap esta vazia!" << endl;
      return;
    }

    heap[1] = heap[tamanho];
    tamanho--;
    heapifyDown(1);
  }
};

#endif