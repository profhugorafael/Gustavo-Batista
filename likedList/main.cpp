#include "LinkedList.h"

int main() {
  LinkedList *myList = new LinkedList();

  myList->add(1);
  myList->add(2);
  myList->add(3);
  myList->add(4);
  myList->add(5);
  myList->add(6);

  myList->print();
}