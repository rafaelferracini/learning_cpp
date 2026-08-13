#include <iostream>
using namespace std;

void simples(int); // protótipo

int main() {
  simples(3); // chamado

  return 0;
}
void simples(int n) { // definição
  cout << "Eu sou uma função simples que recebe o valor " << n << endl;
}
