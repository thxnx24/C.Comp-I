#include <iostream>

int main() {
  char variable{'a'};
  char variable1{'B'};
  char variable2{'4'};
  char variable3{'*'};

  std::cout << "El valor entero del caracter "<< variable << " es "<<static_cast<int>(variable) << std::endl;
  std::cout << "El valor entero del caracter "<< variable1 << " es "<<static_cast<int>(variable1) << std::endl;
  std::cout << "El valor entero del caracter "<< variable2 << " es " << static_cast<int>(variable2) << std::endl;
  std::cout << "El valor entero del caracter "<< variable3 << " es "<<static_cast<int>(variable3) << std::endl;

  return 0;
}