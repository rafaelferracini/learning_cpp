#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  short n1{10};
  float n2{2.9};
  short n3{3};
  float result;
  /*
    Basic operations
  */
  cout << "----------------------------" << endl;
  result = n1 + n2;
  cout << "sum : " << result << endl;

  result = n1 - n2;
  cout << "sub : " << result << endl;

  result = n1 * n2;
  cout << "mult : " << result << endl;

  result = n1 / n2;
  cout << "div : " << result << endl;

  result = n1 % n3;
  cout << "mod : " << result << endl;

  cout << "----------------------------" << endl;
  /*
    Increments
  */

  cout << "----------------------------" << endl;
  short value{5};
  cout << "Postfix increment in " << value << " gives " << value++ << endl;
  cout << "Now value is " << value << endl;

  cout << "Postfix decrement in " << value << " gives " << value-- << endl;
  cout << "Now value is " << value << endl;

  cout << "----------------------------" << endl;

  cout << "Postfix increment in " << value << " gives " << ++value << endl;
  cout << "Now value is " << value << endl;

  cout << "Postfix decrement in " << value << " gives " << --value << endl;
  cout << "Now value is " << value << endl;

  cout << "----------------------------" << endl;

  /*
    Compound assignaments
  */

  value = 45;
  value += 5; // value = 50
  value -= 5; // value = 45
  value *= 2; // value = 90
  value /= 3; // value = 30
  value %= 4; // value = 2
}
