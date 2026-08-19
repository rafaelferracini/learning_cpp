#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {

  const int TamVet = 20;

  char nome[TamVet];
  char sobremesa[TamVet];

  cout << "Entre com seu nome:";
  cin.getline(nome, TamVet);

  cout << "Entre com sua sobremesa:";
  cin.getline(sobremesa, TamVet);

  cout << "Eu tenho um " << sobremesa;
  cout << " para voce, " << nome;
  return 0;
}
