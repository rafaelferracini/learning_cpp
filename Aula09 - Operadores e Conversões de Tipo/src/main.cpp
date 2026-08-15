#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

  int min, max;
  cout << "Entre com os valores min e max: ";
  cin >> min >> max;

  cout << "Sorteando um valor nesta faixa: " << endl;
  int sorteio = min + rand() % (max - min + 1);
  cout << sorteio << endl;
  return 0;
}
