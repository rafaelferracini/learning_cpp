#include <iostream>
using namespace std;

int main() {
  float custoFabrica, custoConsumidor;

  cout << "Custo de Fábrica: ";
  cin >> custoFabrica;

  custoConsumidor = (1 + 0.28 + 0.45) * custoFabrica;
  cout << "O custo ao consumidor é de R$" << custoConsumidor;

  return 0;
}
