#include <cstring>
#include <iostream>

int main(int argc, char *argv[]) {

  char nome[] = "C++ Primer Plus";

  std::cout << strlen(nome) << std::endl << sizeof(nome);
  // Tem 15 caracteres mas 16 bytes pois tem o \0
  return 0;
}
