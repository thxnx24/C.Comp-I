#include <iostream>

int main()
{
  int a{0};
  int b{0};
  
  std::cout << "Ingrese los dos numeros: ";
  std::cin >> a >> b;

  if (a % 2 == 0)
  {
    std::cout << "El " << a << " es par" << std::endl;
  }
  else
  {
    std::cout << "El " << a << " es impar" << std::endl;
  }

  if (b % 2 == 0)
  {
    std::cout << "El " << b << " es par" << std::endl;
  }
  else
  {
    std::cout << "El " << b << " es impar" << std::endl;
  }
  int suma{a+b};
  if (suma % 2 == 0)
  {
    std::cout << "La suma de " << a << " ^ " << b << " es: " << suma << " y es par" << std::endl;
  }
  else
  {
    std::cout << "La suma de " << a << " ^ " << b << "es: "<< suma << " y es impar" << std::endl;
  }
  return 0;
}