#include <iostream>

int main() {
  int a{0};
  int b{0};
  int c{0};
  int d{0};
  int e{0};

  std::cout << "Ingrese los 5 números: ";
  std::cin >> a >> b >> c >> d >> e;
  
  if(a>b && a>c && a>d && a>e)
  {
    std::cout << "El número mayor es: " << a << std::endl;
  }
  if(b>a && b>c && b>d && b>e)
  {
    std::cout << "El número mayor es: " << b << std::endl;
  }
  if(c>a && c>b && c>d && c>e)
  {
    std::cout << "El número mayor es: " << c << std::endl;
  }
  if(d>a && d>b && d>c && d>e)
  {
    std::cout << "El número mayor es: " << d << std::endl;
  }
  if(e>a && e>b && e>d && e>c)
  {
    std::cout << "El número mayor es: " << e << std::endl;
  }


  if(a<b && a<c && a<d && a<e)
  {
    std::cout << "El número menor es: " << a << std::endl;
  }
  if(b<a && b<c && b<d && b<e)
  {
    std::cout << "El número menor es: " << b << std::endl;
  }
  if(c<a && c<b && c<d && c<e)
  {
    std::cout << "El número menor es: " << c << std::endl;
  }
  if(d<a && d<b && d<c && d<e)
  {
    std::cout << "El número menor es: " << d << std::endl;
  }
  if(e<a && e<b && e<d && e<c)
  {
    std::cout << "El número mayor es: " << e << std::endl;
  }
  return 0;
}