#include <algorithm>
#include <vector>

#include "MinHeap.h"

int main() {
  MinHeap *minHeap = new MinHeap(10);

  minHeap->inserir(3);
  minHeap->inserir(4);
  minHeap->inserir(1);
  minHeap->inserir(6);
  minHeap->inserir(2);
  minHeap->inserir(5);
  minHeap->inserir(10);
  minHeap->inserir(7);
  minHeap->inserir(9);

  minHeap->display();
  cout << endl;

  minHeap->removeMin();
  minHeap->display();
  cout << endl;

  minHeap->removeMin();
  minHeap->display();
  cout << endl;

  minHeap->removeMin();
  minHeap->display();
  cout << endl;
}