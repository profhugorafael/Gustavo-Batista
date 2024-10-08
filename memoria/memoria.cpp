#include <iostream>
#include <string>

using namespace std;

class Pessoa {
  public:
    int idade;
    double altura;
    string nome;

};

void imprimePessoa(Pessoa *pessoa) {
  cout << pessoa->nome << endl;
  cout << pessoa->idade << endl;
  cout << pessoa->altura << endl;
  cout << endl;
}

int main() {

  // classe = molde
  // objeto = fruto do molde
  Pessoa *p1 = new Pessoa();

  p1->nome = "Pedro";
  p1->idade = 23;
  p1->altura = 1.7;

  Pessoa *p2 = p1;

  p2->nome = "Joao";

  cout << p1 << endl;
  cout << p2 << endl;

  // imprimePessoa(p1);
  // imprimePessoa(p2);

}