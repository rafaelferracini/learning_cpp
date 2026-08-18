#include <iostream>

int main(int argc, char *argv[]) {

  int vet[3];

  vet[4000] = 50;
  std::cout << vet[4000];
  return 0;
}
