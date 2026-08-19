#include <cstring>
#include <iostream>

int main(int argc, char *argv[]) {

  const int tam{20};

  char nome[tam];
  char data[tam];
  char str[] = " esteve aqui em ";

  std::cout << "Nome: ";
  std::cin.getline(nome, tam);

  std::cout << "Data: ";
  std::cin.getline(data, tam);

  char frase[std::strlen(nome) + std::strlen(data) + std::strlen(str)];

  strcat(frase, strcat(nome, strcat(str, data)));

  std::cout << frase;
  return 0;
}
