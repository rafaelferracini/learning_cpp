#include "../include/binario.h"
#include <iostream>

#define GREEN "\033[32m"
#define RED "\033[31m"
#define DEFAULT "\033[m"
bool avaliacao(int solucao) {

  int peso{0};
  int valor{0};
  bool validade{false};

  for (int i = 0; i < 16; i++) {
    if (testarBit(i, solucao)) {
      if (i == 15) { // Objeto A -
        peso += 12;
        valor += 4;
      }
      if (i == 14) { // Objeto B -
        peso += 3;
        valor += 4;
      }
      if (i == 13) { // Objeto C -
        peso += 5;
        valor += 8;
      }
      if (i == 12) { // Objeto D
        peso += 4;
        valor += 10;
      }
      if (i == 11) { // Objeto E -
        peso += 9;
        valor += 15;
      }
      if (i == 10) { // Objeto F -
        peso += 1;
        valor += 3;
      }
      if (i == 9) { // Objeto G
        peso += 2;
        valor += 1;
      }
      if (i == 8) { // Objeto H
        peso += 3;
        valor += 1;
      }
      if (i == 7) { // Objeto I
        peso += 4;
        valor += 2;
      }
      if (i == 6) { // Objeto J -
        peso += 1;
        valor += 10;
      }
      if (i == 5) { // Objeto K
        peso += 2;
        valor += 20;
      }
      if (i == 4) { // Objeto L -
        peso += 4;
        valor += 15;
      }
      if (i == 3) { // Objeto M -
        peso += 5;
        valor += 10;
      }
      if (i == 2) { // Objeto N
        peso += 2;
        valor += 3;
      }
      if (i == 1) { // Objeto O
        peso += 4;
        valor += 4;
      }
      if (i == 0) { // Objeto P
        peso += 1;
        valor += 12;
      }
    }
  }

  std::cout << solucao << " - $" << valor << " - " << peso << "kg";

  if (peso <= 20) {
    validade = true;
  }

  return validade;
}

void avaliar(int solucao) {

  if (avaliacao(solucao)) {
    std::cout << " - " << GREEN << "OK" << DEFAULT << std::endl;
  } else {
    std::cout << " - " << RED << "X" << DEFAULT << std::endl;
  }
}

int cruzamentoPontoUnico(int solucaoA, int solucaoB) {

  // 1 1 1 0 1 1 0 0 0 1 0 1 1 0 0 0
  // 0 1 1 0 0 0 0 1 1 0 1 0 1 0 0 0
  unsigned int solucaoNova;
  unsigned int mascara{1};

  for (int i = 0; i < 16; i++) {
    mascara = mascara << i;
    if (i < 8) {
      if (testarBit(i, solucaoB)) {
        solucaoNova = solucaoNova ^ mascara;
      }
    } else {
      if (testarBit(i, solucaoA)) {
        solucaoNova = solucaoNova ^ mascara;
      }
    }
    mascara = 1;
  }

  return solucaoNova;
}
