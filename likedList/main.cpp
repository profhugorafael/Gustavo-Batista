#include <iostream>

#include "Pilha.h"

using namespace std;

int main() {
  Pilha *p1 = new Pilha();

  p1->empilhar(2);
  p1->empilhar(4);
  p1->empilhar(6);
  p1->empilhar(9);

  cout << "topo: " << p1->verTopo() << endl;

  cout << "saiu: " << p1->desempilhar() << endl;

  cout << "topo: " << p1->verTopo() << endl;

  cout << endl;

  p1->remover(1);
  p1->mostrarPilha();
}