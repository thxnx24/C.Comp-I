#include <iostream>
#include <iomanip>

int main()
{
  float media_km_galon;
  float coste_galon;
  float km_d;
  float tarifa_dia;
  float peaje;

  float coste_diario;

  std::cout << "Ingrese la cantidad de km que recorrió de su casa a su trabajo: ";
  std::cin >> km_d;

  std::cout << "Ingrese el coste de galón: ";
  std::cin >> coste_galon;

  std::cout << "Ingrese la tarifa diaria de aparcamiento: ";
  std::cin >> tarifa_dia;

  std::cout << "Ingrese el coste del peaje: ";
  std::cin >> peaje;
  
  media_km_galon = km_d/coste_galon;

  coste_diario = media_km_galon + tarifa_dia + peaje;

  std::cout << "\nEl costo total a diario que usted hace de su casa a su trabajo en auto es de " << std::fixed << std::setprecision(2) << coste_diario << " soles" << std::endl;

  return 0;
}