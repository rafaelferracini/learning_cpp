#include <iostream>
using namespace std;

void local(void);

int x = 1;
int y = 2; // variáveis globais

int main() {

  cout << "x antes: " << x << endl << "y antes: " << y << endl;
  cout << "------------" << endl;
  local();
  cout << "------------" << endl;
  cout << "x depois: " << x << endl << "y depois: " << y << endl;

  return 0;
}

void local(void) {
  int y; // variável local

  x = 3;
  y = 3;
  cout << "x dentro: " << x << endl << "y dentro: " << y << endl;
}
