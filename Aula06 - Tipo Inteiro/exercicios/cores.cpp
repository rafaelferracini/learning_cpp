#include <iostream>
using namespace std;

// \033[ estilo;letra;fundo m

/*
  Estilo: 0 = normal, 1 = bold, 4 = underline, 7 = negativo
  Letra: 30 = preto, 31 = vermelho, 32 = verde, 33 = amarelo, 34 = azul, 35 =
  magenta, 36 = cyan, 37 = branca Fundo: 40 = preto, 41 = vermelho, 42 = verde,
  43 = amarelo, 44 = azul, 45 = magenta, 46 = cyan, 47 = branca
*/
#define BLACK "\033[7;37;40m"
#define YELLOW "\033[1;33;44m"
#define GREEN "\033[32m"
#define RED "\033[4;31m"
#define FOREG "\033[38;5;154m"
#define BACKG "\033[38;5;0;48;5;154m"
#define DEFAULT "\033[m"

int main(int argc, char *argv[]) {

  cout << BLACK << "Petro no Branco" << DEFAULT << endl;
  cout << YELLOW << "Amarelo com Azul" << DEFAULT << endl;
  cout << GREEN << "Verde normal" << DEFAULT << endl;
  cout << RED << "Vermelho sublinhado" << DEFAULT << endl;
  cout << FOREG << "256 Cores" << DEFAULT << endl;
  cout << BACKG << "256 Cores" << DEFAULT << endl;
  return 0;
}
