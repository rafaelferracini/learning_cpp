#include <array>
#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {

  std::vector<int> vetI; // vetor vazio de ints
  int n;
  std::cin >> n;
  std::vector<double> vetD(n); // vetor com n doubles

  std::array<int, 5> arrI; // cria vetor de 5 ints

  std::array<double, 4> arrD = {1.2, 1.3, 1.4,
                                1.4}; // cria e inicializa vetor de 4 doubles

  return 0;
}
