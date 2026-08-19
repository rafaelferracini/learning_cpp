#include <cstring>
#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {

  const int tam = 50;
  char senha[tam];

  std::cout << "Digite a senha" << std::endl;
  std::cin >> senha;

  // strcmp retorna 0 se as strings são iguais
  if (strcmp(senha, "senha")) {
    std::cout << "Senha incorreta";
    return 0;
  }

  std::cout << "Senha correta";
  return 0;
}
