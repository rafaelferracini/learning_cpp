#include <ios>
#include <iostream>

struct complexo {
  int re;
  int im;
};

complexo operator+(complexo, complexo);
complexo operator*(complexo, complexo);
std::ostream &operator<<(std::ostream &, complexo &);
std::istream &operator>>(std::istream &, complexo &);

int main(int argc, char *argv[]) {

  complexo c1, c2;

  std::cout << "Primeiro complexo: ";
  std::cin >> c1;
  std::cout << "Segundo complexo: ";
  std::cin >> c2;

  complexo soma = c1 + c2;
  complexo mult = c1 * c2;
  std::cout << soma << std::endl;
  std::cout << mult << std::endl;

  return 0;
}

complexo operator+(complexo c1, complexo c2) {

  complexo temp;
  temp.re = c1.re + c2.re;
  temp.im = c1.im + c2.im;

  return temp;
}

complexo operator*(complexo c1, complexo c2) {

  complexo temp;

  temp.re = c1.re * c2.re - c1.im * c2.im;
  temp.im = c1.im * c2.re + c1.re * c2.im;

  return temp;
}

std::ostream &operator<<(std::ostream &os, complexo &c) {

  os << c.re;
  os << std::showpos;
  os << c.im;
  os << "i";
  os << std::noshowpos;

  return os;
}

std::istream &operator>>(std::istream &is, complexo &temp) {

  is >> temp.re;
  is >> temp.im;
  is.ignore();

  return is;
}
