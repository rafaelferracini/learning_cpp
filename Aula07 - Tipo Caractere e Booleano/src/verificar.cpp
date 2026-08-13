#include <bitset>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  // Definimos que temos 5 lampadas ligadas
  unsigned char estadoLampada = 167; // 1 0 1 0 0 1 1 1

  int verificarLampada;

  cout << "Verificar qual Lampada? ";
  cin >> verificarLampada; // e. g lampada 3
  cout << "------------------" << endl;

  unsigned char mascara = 1;             // 0 0 0 0 0 0 0 1
  mascara = mascara << verificarLampada; // 0 0 0 0 1 0 0 0

  cout << "Estado inicial: " << bitset<8>(int(estadoLampada)) << endl;
  cout << "Máscara       : " << bitset<8>(int(mascara)) << endl;
  cout << "------------------" << endl;

  /*
  inicial | mascara | retorno

  0 | 0 | 0
  1 | 0 | 0
  0 | 1 | 0
  1 | 1 | 1


  Logo corresponde a um AND
  */

  if (estadoLampada & mascara)
    cout << "Ligado" << endl;
  else
    cout << "Desligado" << endl;

  return 0;
}
