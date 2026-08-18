#include <iostream>

double funcao(double[]);

int main(int argc, char *argv[]) {

  double vet[3];

  std::cout << "Digite três valores: ";
  std::cin >> vet[0] >> vet[1] >> vet[2];

  std::cout << funcao(vet);

  return 0;
}

double funcao(double vet[]) {

  double soma = vet[0] * vet[2] - vet[1];
  return soma;
}
