#include <iostream>

int main()
{
  int a{0};
  int b{0};
  int c{0};

  std::cout << "Ingrese los tres numeros: ";
  std::cin >> a >> b >> c;

  if (a % c == 0)
  {
    std::cout << a << " es factor de " << c << std::endl;
  }
  else
  {
    std::cout << a << " no es factor de " << c << std::endl;
  }

  if (b % c == 0)
  {
    std::cout << b << " es factor de " << c << std::endl;
  }
  else
  {
    std::cout << b << " no es factor de " << c << std::endl;
  }
  return 0;
}