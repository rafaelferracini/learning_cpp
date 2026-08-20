#include <iostream>
using namespace std;

struct Data {
  int dia;
  int mes;
  int ano;
};

struct Horario {
  int min;
  int h;
};

struct Evento {
  Data data;
  Horario hora;
  char local[100];
};

ostream &operator<<(ostream &, Data &);
istream &operator>>(istream &, Data &);

ostream &operator<<(ostream &, Horario &);
istream &operator>>(istream &, Horario &);

int main(int argc, char *argv[]) {

  Evento evento;

  cout << "Informe a data do evento: ";
  cin >> evento.data;

  cout << "Informe a hora do evento: ";
  cin >> evento.hora;
  cin.get();

  cout << "Informe o local do evento: ";
  cin.getline(evento.local, 100);

  return 0;
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

ostream &operator<<(ostream &os, Horario &h) {
  os << h.h;
  os << ":";
  os << h.min;

  return os;
}

istream &operator>>(istream &is, Horario &h) {

  char delimitador;

  is >> h.h >> delimitador >> h.min;

  return is;
}
