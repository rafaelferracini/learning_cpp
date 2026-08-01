#include <cmath>
#include <iostream>
using namespace std;

double distancia(double, double, double, double);

int main() {

  double Px, Py, Qx, Qy;

  cout << "Ponto P: ";
  cin >> Px >> Py;

  cout << "Ponto Q: ";
  cin >> Qx >> Qy;

  cout << "A distância entre P e Q é:" << distancia(Px, Py, Qx, Qy);

  return 0;
}

double distancia(double x1, double y1, double x2, double y2) {

  return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
