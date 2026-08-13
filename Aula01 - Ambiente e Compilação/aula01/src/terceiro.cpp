#include <iostream>
using namespace std;

int main() {
  int dias;
  cout << "Número de dias ";
  cin >> dias;

  int horas = dias * 60;
  cout << dias << " dias tem " << horas << " horas." << endl;

  return 0;
}
