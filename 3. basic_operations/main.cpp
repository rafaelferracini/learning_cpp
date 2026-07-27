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
}
