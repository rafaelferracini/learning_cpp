#include <iostream>
using namespace std;

float fltIMC(float, float);
double dblIMC(double, double);

int main(int argc, char *argv[]) {

  float fltAltura{1.75f};
  float fltMassa{80.0f};

  cout << "Digite sua altura em metros: " << fltAltura << endl;
  cout << "Digite sua massa corporal em quilos: " << fltMassa << endl;

  cout.setf(ios_base::fixed, ios_base::floatfield);

  cout << "------------------------------------" << endl;
  cout.precision(6); // fixa esse número para 8
  cout << "IMC para precisão de 6 casas" << endl;
  cout << "Seu índice de massa corporal (float): " << fltIMC(1.75f, 80.0f)
       << endl;
  cout << "Seu índice de massa corporal (double): " << dblIMC(1.75, 80.0)
       << endl;

  cout << "------------------------------------" << endl;
  cout.precision(10); // fixa esse número para 8
  cout << "IMC para precisão de 10 casas" << endl;
  cout << "Seu índice de massa corporal (float): " << fltIMC(1.75f, 80.0f)
       << endl;
  cout << "Seu índice de massa corporal (double): " << dblIMC(1.75, 80.0);

  return 0;
}

float fltIMC(float altura, float massa) {
  float imc = massa / (altura * altura);
  return imc;
}

double dblIMC(double altura, double massa) {
  double imc = massa / (altura * altura);
  return imc;
}
