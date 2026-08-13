#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {

  srand(time(NULL));

  int numero = rand() % 32767;

  cout << "Gerando número pseudo aleatorio : " << numero << endl;
  if (numero > 16834) {
    cout << "GRANDE";
  } else {
    cout << "PEQUENO";
  }

  return 0;
}
