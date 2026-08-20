#include <iostream>

struct jogador {
  char nome[40];
  float salario;
  unsigned gols;
};

int main(int argc, char *argv[]) {

  jogador equipe[22] = {{"Pelé", 10000, 1000}, {"Neymar", 100000, 783}};

  std::cout << equipe[1].nome;

  return 0;
}
