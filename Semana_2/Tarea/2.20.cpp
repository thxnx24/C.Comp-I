#include <iostream>

int main()
{
  int radio{0};
 
  std::cout << "Ingrese el radio del círculo: ";
  std::cin >> radio;

  std::cout << "El diametro del círculo es: " << radio*2 << std::endl;
  std::cout << "La circunferencia del círculo es: " << radio*3.14159*2 << std::endl;
  std::cout << "El área del círculo es: " << 3.14159*radio*radio << std::endl;
  
  return 0;
}