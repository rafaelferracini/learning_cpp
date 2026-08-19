#include <cstring>
#include <iostream>

int main(int argc, char *argv[]) {

  char felino[20] = "Tigre";
  // char animal[3]; // Da erro pois o strcpy não verifica o tamanho da string,
  //  corrompendo memoria envolta

  char animal[20];

  strcpy(animal, felino);
  strcpy(felino, "Jaguar");

  std::cout << "Felino: " << felino << std::endl;
  std::cout << "Animal: " << animal << std::endl;

  return 0;
}
