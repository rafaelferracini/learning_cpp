#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {

  struct {
    int x;
    int y;
  } ponto;

  std::cout << "Entre com as coordenadas do ponto: " << std::endl;
  std::cout << "x: ";
  std::cin >> ponto.x;
  std::cout << "y: ";
  std::cin >> ponto.y;

  std::cout << "A coordenada do vetor é (" << ponto.x << ", " << ponto.y << ")";

  return 0;
}
