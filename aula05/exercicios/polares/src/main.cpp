// src/main.cpp
#include "../include/vetores.h"
#include <iostream>

int main() {

  float x, y;

  std::cout << "Digite as coordenadas do vetor";
  std::cin >> x >> y;

  float norma = calcularNorma(x, y);
  std::cout << "O tamanho do vetor é " << norma << std::endl;

  float angulo = calcularAngulo(x, y);
  std::cout << "O ângulo do vetor é " << angulo * 180 / 3.14159 << " graus"
            << std::endl;

  converterPolares(norma, angulo);
  return 0;
}
