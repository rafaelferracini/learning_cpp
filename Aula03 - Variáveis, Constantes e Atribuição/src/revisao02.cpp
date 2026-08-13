#include <iostream>
using namespace std;

int main() {

  int horas, minutos;
  char pontuacao;

  cout << "Que horas são: ";
  cin >> horas >> pontuacao >>
      minutos; // o cin sabe que os : não podem ser armazenados em horas por ser
               // do tipo char.

  cout << horas << " horas" << endl;
  cout << minutos << " minutos" << endl;
}
