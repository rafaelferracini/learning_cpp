#include <iostream>
#include <istream>
#include <ostream>
using namespace std;

struct Data {
  int dia;
  int mes;
  int ano;
};

int dataParaDias(Data);

int operator-(Data, Data);
ostream &operator<<(ostream &, Data &);
istream &operator>>(istream &, Data &);

int main(int argc, char *argv[]) {

  char barra;

  Data nascimento = {01, 01, 1990};

  cout << "Data de Nascimento: " << nascimento << endl;
  ;
  // cin >> nascimento;

  Data hoje = {26, 10, 2010};

  cout << "Data de Hoje: " << hoje << endl;
  // cin >> hoje;

  int totalDias = hoje - nascimento;

  cout << "Hoje é dia " << hoje << endl;
  cout << "Você tem " << totalDias << " dias de vida";

  return 0;
}

int dataParaDias(Data d) {
  // 12 * 31 = 372
  return (d.dia + (d.mes - 1) * 31 + d.ano * 372);
}

int operator-(Data fim, Data inicio) {

  int diasFim = dataParaDias(fim);
  int diasInicio = dataParaDias(inicio);

  return diasFim - diasInicio;
}

ostream &operator<<(ostream &os, Data &d) {
  os << d.dia;
  os << "/";
  os << d.mes;
  os << "/";
  os << d.ano;

  return os;
}

istream &operator>>(istream &is, Data &d) {

  char barra;

  is >> d.dia >> barra >> d.mes >> barra >> d.ano;

  return is;
}
