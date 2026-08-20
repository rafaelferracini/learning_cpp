#include <iomanip>
#include <ios>
#include <iostream>

struct chocolate {
  char marca[20];
  float peso;
  int cal;
};

int main(int argc, char *argv[]) {

  chocolate lanche = {"Charge", 2.3, 350};

  std::cout << "O chocolate" << lanche.marca << " pesa " << lanche.peso
            << " e tem " << lanche.cal << "kcal.\n\n";

  chocolate caixa[3] = {
      {"Prestigio", 2.4, 200}, {"Lacta", 5.3, 1200}, {"Nescau", 10, 2000}};

  std::cout << "====== Marcas =======" << std::endl;
  std::cout << std::left << std::setfill('.') << std::setw(20) << caixa[0].marca
            << std::setfill('.') << std::setw(10) << caixa[0].peso << std::right
            << std::setfill('.') << std::setw(10) << caixa[0].cal << std::endl;
  std::cout << std::left << std::setfill('.') << std::setw(20) << caixa[1].marca
            << std::setfill('.') << std::setw(10) << caixa[1].peso << std::right
            << std::setfill('.') << std::setw(10) << caixa[1].cal << std::endl;
  std::cout << std::left << std::setfill('.') << std::setw(20) << caixa[2].marca
            << std::setfill('.') << std::setw(10) << caixa[2].peso << std::right
            << std::setfill('.') << std::setw(10) << caixa[2].cal << std::endl;
  std::cout << "=====================";

  return 0;
}
