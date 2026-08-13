#include <iostream>
using namespace std;

int main() {

  int horaUsuario, minutoUsuario;
  char separador;

  cout << "Que horas são? ";
  cin >> horaUsuario >> separador >> minutoUsuario;

  int horaCerta;

  horaCerta = (horaUsuario + 1) % 24;
  cout << "O seu relógio está atrasado." << endl;
  cout << "Agora são " << horaCerta << separador << minutoUsuario;

  return 0;
}
