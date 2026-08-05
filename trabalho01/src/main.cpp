#include "../include/binario.h"
#include "../include/genetico.h"
#include <iostream>
using namespace std;

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

  avaliar(sol1);
  avaliar(sol2);
  avaliar(sol3);
  avaliar(sol4);
  avaliar(sol5);
  avaliar(sol6);
  cout << "----------------------------" << endl;

  return 0;
}
