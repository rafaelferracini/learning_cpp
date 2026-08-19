#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {

  char num1[15];
  int num2;

  std::cout << "Entre com dois números: ";
  std::cin >> num1 >> num2;

  // atoi recebe uma string (char vet terminado em \0). Se não é possivel a
  // conversão retorna 0
  std::cout << "A multiplicação entre eles é " << num2 * atoi(num1);

  return 0;
}
