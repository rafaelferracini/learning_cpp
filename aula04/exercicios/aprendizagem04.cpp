#include <iostream>
#define PI 3.14149

using namespace std;

double volumeCilindro(double, double);

int main(int argc, char *argv[]) {

  double raioCilindro, alturaCilindro;

  cout << "Calcula o volume de um cilindro" << endl;
  cout << "---------------------------" << endl;
  cout << "Entre com o raio da base: ";
  cin >> raioCilindro;

  cout << "Entre com a altura: ";
  cin >> alturaCilindro;

  cout << "O volume do cilindro é "
       << volumeCilindro(raioCilindro, alturaCilindro);

  return 0;
}

double volumeCilindro(double r, double h) {
  double volume = PI * r * r * h;

  return volume;
}
