#include <cmath>
#include <iostream>
using namespace std;

int main() {

  double angulo;
  cout << "Digite um angulo: ";
  cin >> angulo;

  cout << "Seno = " << sin(angulo * M_PI / 180);
  return 0;
}
