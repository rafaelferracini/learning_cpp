#include <ios>
#include <iostream>

struct complexo {
  int re;
  int im;
};

complexo soma(complexo, complexo);
complexo multiplicar(complexo, complexo);
void imprimir(complexo);
complexo ler();

int main(int argc, char *argv[]) {

  complexo c1, c2;

  std::cout << "Primeiro complexo: ";
  c1 = ler();

  std::cout << "Segundo complexo: ";
  c2 = ler();

  imprimir(soma(c1, c2));
  std::cout << std::endl;
  imprimir(multiplicar(c1, c2));
  std::cout << std::endl;

  return 0;
}

complexo soma(complexo c1, complexo c2) {

  complexo temp;
  temp.re = c1.re + c2.re;
  temp.im = c1.im + c2.im;

  return temp;
}

complexo multiplicar(complexo c1, complexo c2) {

  complexo temp;

  temp.re = c1.re * c2.re - c1.im * c2.im;
  temp.im = c1.im * c2.re + c1.re * c2.im;

  return temp;
}

void imprimir(complexo c) {

  std::cout << c.re;
  std::cout << std::showpos;
  std::cout << c.im << "i";
  std::cout << std::noshowpos;
}

complexo ler() {

  complexo temp;

  std::cin >> temp.re;
  std::cin >> temp.im;
  std::cin.ignore();

  return temp;
}
