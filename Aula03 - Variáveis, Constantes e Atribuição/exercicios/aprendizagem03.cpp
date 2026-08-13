#include <iostream>
using namespace std;

int main() {

  float peso;
  float horaCorrida, horaCiclismo, horaNatacao;
  float minCorrida, minCiclismo, minNatacao;
  char separador;

  cout << "Digite seu peso em quilos: ";
  cin >> peso;

  cout << "Digite o tempo de corrida: ";
  cin >> horaCorrida >> separador >> minCorrida >> separador;

  cout << "Digite o tempo de ciclismo: ";
  cin >> horaCiclismo >> separador >> minCiclismo >> separador;

  cout << "Digite o tempo de natação: ";
  cin >> horaNatacao >> separador >> minNatacao >> separador;

  float gastoCalorico, tempoCorrida, tempoCiclismo, tempoNatacao;

  tempoCorrida = (horaCorrida * 60 + minCorrida) / 60;
  tempoCiclismo = (horaCiclismo * 60 + minCiclismo) / 60;
  tempoNatacao = (horaNatacao * 60 + minNatacao) / 60;

  gastoCalorico =
      peso * (7 * (tempoCorrida + tempoCiclismo) + 8 * tempoNatacao);

  cout << "Você gastou um total de " << gastoCalorico << " calorias";

  return 0;
}
