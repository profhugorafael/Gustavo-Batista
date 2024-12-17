#include "Tree.h"

int main() {
  Tree* numbersTree = new Tree();

  numbersTree->add(5);

  numbersTree->add(3);
  numbersTree->add(1);
  numbersTree->add(4);

  numbersTree->add(7);
  numbersTree->add(6);
  numbersTree->add(9);

  // 5 3 1 4 7 6 9
  numbersTree->displayPreOrder();

  cout << numbersTree->contains(3) << endl;
  cout << numbersTree->contains(7) << endl;
  cout << numbersTree->contains(5) << endl;
  cout << numbersTree->contains(11) << endl;
  cout << numbersTree->contains(2) << endl;
}