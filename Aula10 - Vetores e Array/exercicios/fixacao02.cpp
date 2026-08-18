#include <iostream>

int main(int argc, char *argv[]) {

  int vet[5];

  std::cout << "Digite 5 valores: ";
  std::cin >> vet[0] >> vet[1] >> vet[2] >> vet[3] >> vet[4];

  int soma{0};
  for (int i = 0; i < 5; i++) {
    soma += vet[i];
  }

  std::cout << "A soma do vetor é " << soma;

  return 0;
}
