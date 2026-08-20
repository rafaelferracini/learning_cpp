#include <cstring>
#include <iostream>
using namespace std;

struct jogador {
  char nome[40];
  float salario;
  unsigned gols;
};

int main(int argc, char *argv[]) {

  jogador zico;
  zico.gols = 700;
  zico.salario = 400000;
  // zico.nome = "Zico";
  strcpy(zico.nome, "Zico");

  cout << zico.nome << " fez " << zico.gols << " gols e recebe" << zico.salario;

  return 0;
}
