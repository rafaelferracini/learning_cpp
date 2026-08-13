#include <iostream>
using namespace std;

float media(float, float);

int main() {

  float n1, n2;

  cout << "Entre com um número: ";
  cin >> n1;

  cout << "Entre com outro número: ";
  cin >> n2;

  cout << "A média harmônica dos números é " << media(n1, n2);

  return 0;
}

float media(float n1, float n2) {
  float m = 2 * n1 * n2 / (n1 + n2);
  return m;
}
