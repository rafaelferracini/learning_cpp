// src/vetores.cpp
#include <cmath>
#include <iostream>

float calcularNorma(float x, float y) {
  float vetorNorma = std::sqrt(std::pow(x, 2) + std::pow(y, 2));
  return vetorNorma;
}

float calcularAngulo(float x, float y) {
  float vetorAngulo = std::atan2(y, x);
  return vetorAngulo;
}

void converterPolares(float r, float theta) {
  std::cout << "Coordenadas polares do vetor: (" << r << ", " << theta << ")"
            << std::endl;
}
