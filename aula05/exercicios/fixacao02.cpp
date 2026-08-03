#include <iostream>
using namespace std;

float convFah(float);

int main() {

  float tempCelsius, tempFah;

  cout << "Digite uma temperatura em graus Celsius: ";
  cin >> tempCelsius;

  tempFah = convFah(tempCelsius);

  cout << tempCelsius << " graus Celsius equivalem a " << tempFah
       << " graus Fahrenheit";

  return 0;
}

float convFah(float celsius) {
  float fah = (9.0 / 5.0) * celsius + 32;

  return fah;
}
