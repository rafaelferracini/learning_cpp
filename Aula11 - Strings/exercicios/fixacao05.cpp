#include <cstring>
#include <iostream>

int main(int argc, char *argv[]) {

  char palavra[30];

  std::cout << "Digite uma palavra: ";
  std::cin >> palavra;

  int tam = strlen(palavra);

  std::cout << "Em " << palavra << " a última letra é " << palavra[tam - 1];

  return 0;
}
