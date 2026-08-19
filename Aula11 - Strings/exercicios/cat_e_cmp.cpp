#include <cstring> // Para strcpy, strcat e strcmp
#include <iostream>

int main() {

  const int tam{30};
  char d1[tam], d2[tam], d3[tam];

  std::cout << "Quais suas datas comemorativas preferidas?\n";
  std::cin.getline(d1, tam);
  std::cin.getline(d2, tam);
  std::cin.getline(d3, tam);

  char frase[5 * tam];

  std::strcpy(frase, d1);
  std::strcat(frase, ", ");
  std::strcat(frase, d2);
  std::strcat(frase, " e ");
  std::strcat(frase, d3);
  std::strcat(frase, " são belas festas.");

  std::cout << frase << std::endl;

  char alvo[] = "Natal";

  if (std::strcmp(d1, alvo) == 0 || std::strcmp(d2, alvo) == 0 ||
      std::strcmp(d3, alvo) == 0) {

    std::cout << "O Natal também é uma das minhas datas preferidas!"
              << std::endl;
  }

  return 0;
}
