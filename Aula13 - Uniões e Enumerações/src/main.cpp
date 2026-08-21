#include <iostream>
#include <istream>
#include <random>
using namespace std;

void teste() {
  union identificador {
    char ch;
    int num;
    double frac;
  };
  identificador id;
  cout << sizeof(id) << endl; // 8 pois é o tamanho do double

  id.ch = 'a';             // char
  cout << id.ch << endl;   // a
  id.frac = 3.8;           // double
  cout << id.frac << endl; // 3.8
  cout << id.ch << endl;   // lixo sobrescrito pelo double
  id.num = 65;
  cout << id.num << endl;
  cout << id.ch << endl; // A pois 65 é o ASCII
}

/*
Conversão de caracteres em tabela ASCII para número
*/
void charint() {
  union CharInt {
    short num;
    char ch;
  };
  CharInt val = {0}; // a inicialização deve ter apenas um valor

  cout << "Digite um caractere: ";
  cin >> val.ch;

  cout << "Código ASCII: ";
  cout << val.num << endl;
}

void senha() {

  union regkey {
    int chave;
    char codigo[8];
  };

  cout << "Qual seu tipo de senha?\n[1] chave\n[2] código\nOpção: ";
  short tipo;
  cin >> tipo;

  regkey senha;
  if (tipo == 1) {
    cout << "Digite sua chave: ";
    cin >> senha.chave;
  } else {
    cout << "Digite seu código: ";
    cin >> senha.codigo;
  }
}

void tipo_string() {
  struct string {
    bool type;
    union {
      char small[12];
      struct {
        char *str;
        int size;
        int capacity;
      } normal;
    } data;
  };
}

void bebe() {
  enum Sexo { Masculino, Feminino };

  random_device rand;
  int sorteio = rand() % 2;

  if (sorteio == Masculino) { // const int Masculino = 0
    cout << sorteio << "Menino";
  } else { // const int Feminino = 1
    cout << sorteio << "Menina";
  }
}

enum mes { Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez };

istream &operator>>(istream &is,
                    mes &m) { // cin não recebe o tipo mes naturalmente
  int temp;
  is >> temp;
  m = mes(temp);
  return is;
}
void meses() {

  mes inicio, fim;

  inicio = Fev;
  fim = Nov;

  cout << "Digite o número do mês atual: ";
  mes atual;
  cin >> atual;

  if (atual >= inicio && atual <= fim) {
    cout << "Você está no período de aula.\n";
  } else {
    cout << "Férias!\n";
  }
}
int main(int argc, char *argv[]) {

  meses();

  return 0;
}
