#include <iomanip>
#include <ios>
#include <iostream>

int main(int argc, char *argv[]) {

  const float PRECOS[]{1.5f, 2.0f, 1.0f};

  float items[3];

  std::cout << "Prezado Cliente,\n";
  std::cout << "Digite a quantidade de quilos desejados:\n";

  std::cout << "Alface: ";
  std::cin >> items[0];

  std::cout << "Beterraba: ";
  std::cin >> items[1];

  std::cout << "Cenoura: ";
  std::cin >> items[2];

  float totalAlface = items[0] * PRECOS[0];
  float totalBeterraba = items[1] * PRECOS[1];
  float totalCenoura = items[2] * PRECOS[2];

  std::cout << std::fixed << std::setprecision(2);

  std::cout << "Resumo da Compra\n";
  std::cout << "---------------------" << std::endl;
  std::cout << "Alface       = R$" << totalAlface << std::endl;
  std::cout << "Beterraba    = R$" << totalBeterraba << std::endl;
  std::cout << "Cenoura      = R$" << totalCenoura << std::endl;
  std::cout << "---------------------" << std::endl;
  std::cout << "Total:       = R$"
            << totalAlface + totalBeterraba + totalCenoura;
  return 0;
}
