#include <iomanip>
#include <iostream>

int main(int argc, char *argv[]) {

  double apostaUm, apostaDois;

  std::cout << "Aposta dos Amigos" << std::endl;
  std::cout << "-------------" << std::endl;

  std::cout << "Digite a quantia apostada pelo jogador 1 : ";
  std::cin >> apostaUm;

  std::cout << "Digite a quantia apostada pelo jogador 2 : ";
  std::cin >> apostaDois;

  double apostaTotal = apostaUm + apostaDois;

  double valorPremio;
  std::cout << "Entre com o valor do prêmio: ";
  std::cin >> valorPremio;

  double premioUm = apostaUm / apostaTotal;
  double premioDois = apostaDois / apostaTotal;

  std::cout << std::fixed << std::setprecision(0);
  std::cout << "O jogador 1 tem direito a R$" << premioUm * valorPremio
            << std::endl;
  std::cout << "O jogador 2 tem direito a R$" << premioDois * valorPremio
            << std::endl;

  return 0;
}
