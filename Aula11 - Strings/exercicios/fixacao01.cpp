#include <iostream>

int main(int argc, char *argv[]) {

  const int tam{15};

  char primeiroNome[tam], segundoNome[tam];

  std::cout << "Primeiro nome? " << std::endl;
  std::cin >> primeiroNome;
  std::cout << "Segundo nome? " << std::endl;
  std::cin >> segundoNome;

  std::cout << "Bom dia, " << primeiroNome << " " << segundoNome << ".\n";
  std::cout << "Seja bem vindo " << primeiroNome[0] << segundoNome[0] << "!";

  return 0;
}
