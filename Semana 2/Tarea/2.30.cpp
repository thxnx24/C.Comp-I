#include <iostream>

int main() 
{
  float kg;
  float mts;

  std::cout << " Valor IMC\n Bajo peso:    Por debajo de 18.5\n Normal:       Entre 18.5 y 24.9\n Sobrepeso:    Entre 25 y 29.9\n Obesidad:     30 o superior\n\n";
  std::cout << "Ingrese su peso por favor (kg): ";
  std::cin >> kg;
  std::cout << "Ingrese su altura por favor (mts): ";
  std::cin >> mts;

  float imc{kg/(mts*mts)};

  std::cout << "\nSu IMC es de: " << imc << std::endl;
  
  return 0;
}