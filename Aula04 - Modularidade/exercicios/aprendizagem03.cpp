#include <iostream>
using namespace std;

double media(double, double);

int main() {

  double n1, n2;

  cout << "Digite um valor inteiro: ";
  cin >> n1;

  cout << "Digite outro valor inteiro: ";
  cin >> n2;

  cout << "A media dos números é: " << media(n1, n2);
  return 0;
}

double media(double n1, double n2) { return (n1 + n2) / 2; }
