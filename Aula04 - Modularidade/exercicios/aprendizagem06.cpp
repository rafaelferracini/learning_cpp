#include <cstdlib>
#include <iostream>
using namespace std;

int Inicializar();
void ligar();
void verificar();
void ativar();

int main(int argc, char *argv[]) {

  int verificador = Inicializar();

  if (verificador > 16384) {
    cout << "Sistema em funcionamento";
  } else {
    cout << "Falha na inicialização";
  }
  return 0;
}

int Inicializar() {

  cout << "Inicializando o Sistema: " << endl;
  ligar();
  verificar();
  ativar();

  int numero = rand() % 32676;

  return numero;
}

void ligar() { cout << "- Ligando dispositivos" << endl; }

void verificar() { cout << "- Verificando integridade" << endl; }

void ativar() { cout << "- Ativando processos" << endl; }
