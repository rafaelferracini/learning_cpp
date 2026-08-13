#include <iostream>
using namespace std;

int main() {

  float altura, largura, comprimento;

  cout << "Entre com a altura, largura e comprimento: ";
  cin >> altura >> largura >> comprimento;

  cout << "O volume é " << altura * largura * comprimento << "cm cúbicos."
       << endl;
  return 0;
}
