#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Tabuada de ";
  cin >> n;

  cout << "---------------" << endl;
  for (int i = 0; i < 10; i++) {
    cout << n << " x " << i << " = " << n * i << endl;
  }
}
