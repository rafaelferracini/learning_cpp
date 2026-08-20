#include <iomanip>
#include <iostream>
using namespace std;

struct contaBancaria {
  int id;
  char nome[20];
  double saldo = 0;
};

int main(int argc, char *argv[]) {

  contaBancaria cliente;

  cout << "Entre com seu ID: ";
  cin >> cliente.id;
  cin.get();

  cout << "Entre com seu nome: ";
  cin.getline(cliente.nome, 20);

  system("clear");

  // Cabeçalho
  cout << left << setw(12) << "Conta (ID)" << setw(25) << "Nome" << right
       << setw(12) << "Saldo" << endl;
  cout << string(49, '-') << endl;

  cout << left << setw(12) << cliente.id << setw(25) << cliente.nome << right
       << setw(9) << "R$ " << fixed << setprecision(2) << cliente.saldo << endl;

  cout << string(49, '-') << endl;
  cout << "Quanto deseja depositar: R$";
  double deposito;
  cin >> deposito;
  cliente.saldo += deposito;

  system("clear");

  // Cabeçalho
  cout << left << setw(12) << "Conta (ID)" << setw(25) << "Nome" << right
       << setw(12) << "Saldo" << endl;
  cout << string(49, '-') << endl;

  cout << left << setw(12) << cliente.id << setw(25) << cliente.nome << right
       << setw(9) << "R$ " << fixed << setprecision(2) << cliente.saldo << endl;

  cout << string(49, '-') << endl;
  return 0;
}
