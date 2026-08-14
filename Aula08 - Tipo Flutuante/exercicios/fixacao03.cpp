#include <iostream>

#define SEG 3.156e7

float converter(int);

int main(int argc, char *argv[]) {

  int idade;

  std::cout << "Digite a sua idade em anos: ";
  std::cin >> idade;

  float segundos = converter(idade);

  std::cout << idade << " anos correspondem a " << segundos << std::endl;

  std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
  std::cout.precision(1);
  std::cout << idade << " anos correspondem a " << segundos << std::endl;

  return 0;
}

float converter(int idade) {
  float segundos = idade * SEG;
  return segundos;
}
