#include <iostream>
using namespace std;

void formatar(int, int);

int main() {

  int horas, minutos;

  cout << "Entre com o número de horas: ";
  cin >> horas;

  cout << "Entre com o número de minutos: ";
  cin >> minutos;

  formatar(horas, minutos);

  return 0;
}

void formatar(int h, int m) { cout << "Agora são: " << h << ":" << m << endl; }
