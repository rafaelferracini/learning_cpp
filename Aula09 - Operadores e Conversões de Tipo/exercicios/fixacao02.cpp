#include <ios>
#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {

  float num;

  std::cout << "Dogote um ponto flutuante: ";
  std::cin >> num;

  std::cout << "Notação padrão: " << num << std::endl;
  std::cout << std::scientific;
  std::cout.precision(4);
  std::cout << "Notação cientifíca: " << num << std::endl;

  std::cout << std::fixed;
  std::cout.precision(2);
  std::cout << "Notação Decimal: " << num << std::endl;

  return 0;
}
