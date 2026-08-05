#include "../include/binario.h"
#include "../include/genetico.h"
#include <iostream>
using namespace std;

#define GREEN "\033[32m"
#define RED "\033[31m"
#define DEFAULT "\033[m"

int main(int argc, char *argv[]) {

  unsigned int sol1{60504}, sol2{25000}, sol3{12329}, sol4{38054}, sol5{1259},
      sol6{732};
  cout << "Entre com 6 soluções iniciais (números entre 0 e 65535)" << endl;
  //  cin >> sol1 >> sol2 >> sol3 >> sol4 >> sol5 >> sol6;
  cout << sol1 << endl;
  cout << sol2 << endl;
  cout << sol3 << endl;
  cout << sol4 << endl;
  cout << sol5 << endl;
  cout << sol6 << endl;

  cout << "----------------------------" << endl;
  cout << "Resultado da Avaliação" << endl;
  cout << "----------------------------" << endl;
  if (avaliacao(sol1)) {
    cout << " - " << GREEN << "OK" << DEFAULT << endl;
  } else {
    cout << " - " << RED << "X" << DEFAULT << endl;
  }
  if (avaliacao(sol2)) {
    cout << " - " << GREEN << "OK" << DEFAULT << endl;
  } else {
    cout << " - " << RED << "X" << DEFAULT << endl;
  }
  if (avaliacao(sol3)) {
    cout << " - " << GREEN << "OK" << DEFAULT << endl;
  } else {
    cout << " - " << RED << "X" << DEFAULT << endl;
  }
  if (avaliacao(sol4)) {
    cout << " - " << GREEN << "OK" << DEFAULT << endl;
  } else {
    cout << " - " << RED << "X" << DEFAULT << endl;
  }
  if (avaliacao(sol5)) {
    cout << " - " << GREEN << "OK" << DEFAULT << endl;
  } else {
    cout << " - " << RED << "X" << DEFAULT << endl;
  }
  if (avaliacao(sol6)) {
    cout << " - " << GREEN << "OK" << DEFAULT << endl;
  } else {
    cout << " - " << RED << "X" << DEFAULT << endl;
  }
  cout << "----------------------------" << endl;

  return 0;
}
