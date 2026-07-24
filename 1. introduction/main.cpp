#include <iostream> // import input and output library
#include <limits>
#include <string> // import string data type

void clear_buffer() {
  /*
      cin.ignore(count, delim): count é o numero maximo de caracters descartados
     e delim é o ultimo caracter a ser descartado, quando o comando chegar nele,
     para.
          - ignore ate count caracters ou até encontrar delim
      std::numeric_limits<int>::max(): fornece informação sobre determinado tipo
     numerico (no caso int), no caso o valor maximo do int
      std::numeric_limits<std::streamsize>::max(): fornece o valor maximo de
     stremsize (9223372036854775807), praticamente infinito. Garante que vai
     apagar o buffer inteiro
  */
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main(int argc, char const *argv[]) {
  /*
      std::cout : print data to the console
      std::cin : read data from  the terminal
      std::cerr : print erros to console
      std::clog : print log massage to console
  */

  // Printing data
  std::cout << "\n--------------------------------" << std::endl;
  std::cout << "Hello World, C++20" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  /*
      Declaring and initiliazing variables
          - int age=21;
          - int age; followed by age = 21;
  */
  int age{21};
  std::cout << "\n--------------------------------" << std::endl;
  std::cout << "Age : " << age << std::endl;
  std::cout << "--------------------------------" << std::endl;

  // Input values to user to variables
  int age1;
  std::string name;

  std::cout << "\n--------------------------------" << std::endl;
  std::cout << "Type your name and age separated by a space or enter: ";
  // std::cin >> name;
  // std::cin >> age1;
  std::cin >> name >> age1;
  std::cout << "Welcome " << name << " you're " << age1 << " years"
            << std::endl;
  std::cout << "--------------------------------" << std::endl;

  // Theres a \n on buffer due to last cin. Clear buffer until the \n character
  clear_buffer();

  // Input data with spaces
  int age2;
  std::string full_name;
  std::cout << "\n--------------------------------" << std::endl;
  std::cout << "Please enter your full name: ";
  std::getline(std::cin, full_name);
  std::cin >> age2;
  std::cout << "Welcome " << full_name << " you're " << age2 << " years"
            << std::endl;
  std::cout << "--------------------------------" << std::endl;
  /* Error and log message
      std::cerr << "This is an error message" << std::endl;
      std::clog << "This is a log message" << std::endl;
  */
  return 0;
}
