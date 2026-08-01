#include <iostream>
using namespace std;

int main() {

  int tempo, cigarros;
  float valor;

  cout << "A quantos anos você fuma: ";
  cin >> tempo;

  cout << "Quantos cigarros você fuma por dia: ";
  cin >> cigarros;

  cout << "Qual o preço médio de uma carteira de cigarros? ";
  cin >> valor;

  cout << "Vocẽ gastou até agora R$" << cigarros * valor * 365 * tempo / 20
       << " com cigarros";
  return 0;
}
