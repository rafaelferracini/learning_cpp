#include <iostream>

int main(int argc, char *argv[]) {

  const int tam{15};
  char nome[tam];

  std::cout << "Qual é o nome? ";
  std::cin.getline(nome, tam);

  char conceito;
  std::cout << "Que conceito você merece? ";
  std::cin.get(conceito);

  std::cout << "Bom dia, " << nome << ". Seu conceito é "
            << char(conceito +
                    1); // ao somar 1 ao conceito, a operação é promovida para o
                        // tipo int e por isso precisa do typecast

  conceito++;

  std::cout << "Bom dia, " << nome << ". Seu conceito é " << conceito;

  return 0;
}
