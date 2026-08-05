#include <bitset>
#include <iostream>
using namespace std;

void interruptor(int argc, char *argv[]) {

  // Definimos que temos 5 lampadas ligadas
  unsigned char estadoLampada = 167; // 1 0 1 0 0 1 1 1

  cout << "Estado inicial: " << bitset<8>(int(estadoLampada)) << endl;
  int fliparLampada;

  cout << "------------------" << endl;
  cout << "Flipar qual lampada? ";
  cin >> fliparLampada; // e. g lampada 3

  unsigned char mascara = 1;          // 0 0 0 0 0 0 0 1
  mascara = mascara << fliparLampada; // 0 0 0 0 1 0 0 0

  cout << "Máscara: " << bitset<8>(int(mascara)) << endl;
  cout << "XOR    : " << bitset<8>(int(estadoLampada)) << endl;

  estadoLampada = estadoLampada ^ mascara;
  cout << "------------------" << endl;
  cout << bitset<8>(int(estadoLampada)) << endl;
}
