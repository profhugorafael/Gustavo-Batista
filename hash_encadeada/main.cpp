#include "Hash.h"

int main() {
  Hash* sequencia = new Hash(20);

  sequencia->inserir(1);
  sequencia->inserir(10);
  sequencia->inserir(12);
  sequencia->inserir(21);
  sequencia->inserir(32);
  sequencia->inserir(62);
  sequencia->inserir(82);
  sequencia->inserir(13);
  sequencia->inserir(15);

  sequencia->display();

  cout << "--" << endl;

  sequencia->remover(15);
  sequencia->display();
  return 0;
}