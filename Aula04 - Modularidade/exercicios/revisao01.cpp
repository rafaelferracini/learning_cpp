#include <cstdlib>
#include <iostream>

using namespace std;

int main() {

  srand(2395);

  cout << "Gerando números pseudo aleatórios : " << endl;

  int numero;
  for (int i = 0; i < 5; i++) {
    numero = rand() % 32767;
    cout << numero << " ";
  }

  return 0;
}
