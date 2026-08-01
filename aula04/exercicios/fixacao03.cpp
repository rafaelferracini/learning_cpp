#include <iostream>
using namespace std;

void UmTres();
void Dois();

int main(int argc, char *argv[]) {

  cout << "Começando agora: " << endl;
  UmTres();
  cout << endl << "Pronto!";
  return 0;
}

void UmTres() {
  cout << "Um ";
  Dois();
  cout << "Três";
}

void Dois() { cout << "Dois "; }
