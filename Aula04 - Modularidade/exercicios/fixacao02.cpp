#include <iostream>
using namespace std;

void Linha();
void Pequena();
void Media();
void Grande();

int main() {

  Pequena();
  Media();
  Grande();
  cout << "Programação de Computadores" << endl;
  Grande();
  Media();
  Pequena();

  return 0;
}

void Linha() { cout << "----------"; }

void Pequena() {
  Linha();
  cout << endl;
}

void Media() {
  Linha();
  Linha();
  cout << endl;
}

void Grande() {
  Linha();
  Linha();
  Linha();
  cout << endl;
}
