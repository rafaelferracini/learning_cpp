#include <iomanip>
#include <iostream>

using namespace std;

/*
    int: integer, for example, -273, 42, and 1066
    double: fractional
    float: fractional
    char: character
    bool: true(1) or false(0)
    void: for functions that doesnt return any value
    auto: later

*/

int main(int argc, char const *argv[]) {
  // Bases numéricas
  /*
  int number1{15};         // Decimal
  int number2{017};        // Octal
  int number3{0x0f};       // Hexadecimal
  int number4{0b00001111}; // Binary

  cout << number1 << endl;
  cout << number2 << endl;
  cout << number3 << endl;
  cout << number4 << endl;

  // Braced Initilization
  int braced_number1{10}; // initialized to 10
  int braced_number2{15}; // initialized to 15
  int braced_total{braced_number1 + braced_number2};

  // Functional Initilization
  int functional_count(2.9); // initialized as 2 cause its an integer
  cout << "|Functional integer Initilization with a double input "
       << functional_count << endl;
  // Assignment Initilization
  int assignment_count = 2.9;
  cout << "|Assignment integer Initilization with a double input "
       << assignment_count << endl;
*/
  /* Integers
     - Ocupa 4 bytes
     - unsigned int: ocupa 4 bytes e aceita apenas valores positivos (0 até 4bi)
     - signed int: ocupa 4 bytes e aceita valores positivos e negativos (-2bi
     até +2bi)
     - short int: ocupa 2 bytes (-32k a +32k)
     - unsigned short int: ocupa
  */
  /*
    short short_var;           // 2 bytes | de -32k a 32k
    short int short_int;       // reduntante, recomenda-se usar apenas short
    signed short signed_short; // reduntante, recomenda-se usar apenas short
    signed short int signed_short_int;     // reduntante
    unsigned short int unsigned_short_int; // de 0 a 64k
    cout << "Size of short is " << sizeof(short) << " bytes" << endl;

    int int_var; // 4 bytes | -2bi até 2bi
    signed signed_var;
    signed int signed_int;
    unsigned int unsigned_int; // de 0 a 4bi
    cout << "Size of int is " << sizeof(int) << " bytes" << endl;

    long long_var{32}; // 4 or 8 bytes |
    long int long_int;
    // ...
    unsigned long unsigned_long;
    cout << "Size of long is " << sizeof(long_var) << " bytes" << endl;

    long long long_long_var;               // 8 bytes | -9.2e18 ate +9.e18
    unsigned long long unsigned_long_long; // 0 até 1.8e19
    cout << "Size of long long is " << sizeof(long long) << " bytes" << endl;

  */

  /*
    Fractional numbers:
      float (4 bytes | 7 casas de precisao),
      double(8 bytes | 15 casas de precisao), (recomendado)
      long double (16 bytes)
  */
  /*
    cout << setprecision(20); // set terminal precision

    float float1{1.1234567890123456789f}; // f indicates that its a float
                                          // otherwise compiler treats as a
    double cout << float1
         << endl; // output is broken from 1.123456 because the precision is 7

    double double1{1.1234567890123456789};
    cout << double1 << endl; // output is broken from 1.1234567890123456

    long double long_double1{1.1234567890123456789L}; // L indicates a long
    cout << long_double1 << endl;
  */
  /*
  Boolean Tyoe
  */

  /*
  bool red_light{true};
  bool green_light{false};

  if (red_light == true) {
    cout << "Light is red" << endl;
  } else {
    cout << "Light is not red" << endl;
  }
  */

  /*
    Character type
  */
  char character{'a'};            // occupies 1 byte
  char ascii_table_character{72}; // stores H

  cout << character << endl;
  cout << ascii_table_character << endl;
  cout << "value(int) : "
       << static_cast<int>(character); // static_cast convert to integer
}
