#include <iostream>
using namespace std;

int main() {

  int ladoA, ladoB;

  cout << "Lado a: ";
  cin >> ladoA;

  cout << "Lado b: ";
  cin >> ladoB;

  int area = ladoA * ladoB;
  cout << "Área da base = " << area << endl;

  int altura;
  cout << "Altura: ";
  cin >> altura;

  cout << "Volume do prisma = " << area * altura;
}
