#include <cmath>
#include <iostream>
using namespace std;

int Absoluto(int);

int main(int argc, char *argv[]) {

  int numero;
  cout << "Digite um número inteiro: ";
  cin >> numero;

  cout << "O valor absoluto é: " << Absoluto(numero);

  return 0;
}

int Absoluto(int n) {

  int abs = sqrt(pow(n, 2));

  return abs;
}
