#include <iostream>
#include <ostream>

struct jogador {
  char nome[40];
  float salario;
  unsigned gols;
};

void exibir(jogador);

jogador ler();

int main(int argc, char *argv[]) {

  jogador pele;

  std::cout << "Defina as informações sobre o jogador: " << std::endl;
  pele = ler();

  exibir(pele);

  return 0;
}

void exibir(jogador j1) {

  std::cout << j1.nome << std::endl;
  std::cout << j1.salario << std::endl;
  std::cout << j1.gols << std::endl;
}

jogador ler() {
  jogador temp;
  std::cin >> temp.nome;
  std::cin >> temp.salario;
  std::cin >> temp.gols;

  return temp;
}
