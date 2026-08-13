#include <iostream> // inclusão da biblioteca de input e output

using namespace std; // simplificar o codigo

/*
  Função principal: comentário em bloco
*/
int main(int argc, char *argv[]) {
  cout << "Nome do programa: " << argv[0] << endl;

  if (argc > 1) {
    cout << "Arg: " << argv[1] << endl;
  }
  return 0;
}
