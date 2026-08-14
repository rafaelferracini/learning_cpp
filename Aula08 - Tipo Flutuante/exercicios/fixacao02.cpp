#include <iostream>

int main(int argc, char *argv[]) {

  float numero;

  std::cout << "Digite um ponto flutuante: ";
  std::cin >> numero;

  std::cout << "Notação padrão: " << numero << std::endl;

  std::cout.setf(std::ios_base::scientific, std::ios_base::floatfield);
  std::cout << "Notação científica: " << numero << std::endl;

  std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
  std::cout << "Notação decimal: " << numero;

  return 0;
}
