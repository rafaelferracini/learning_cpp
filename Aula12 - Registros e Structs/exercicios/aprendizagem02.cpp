#include <iostream>
using namespace std;

struct Palavra {
  char portugues[20];
  char ingles[20];
  char espanhol[20];
};

int main(int argc, char *argv[]) {

  const int Tam{10};

  Palavra dicionario[Tam]{
      {"Cadeira", "Chair", "cadeirita"},
      {"Celular", "Cellphone", "telefonizito"},
  };

  return 0;
}
