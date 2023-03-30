#include <iostream>
#include <string>
#include "3.11.h"


int main()
{ 
    std::string marca;
    std::string tipo_combustible;
    int año_fabricacion;
    std::string color;
    int cilindrada;

    std::cout << "Ingrese marca del vehículo: ";
    std::cin >> marca;
    std::cout << "Ingrese tipo de combustible del vehículo: ";
    std::cin >> tipo_combustible;
    std::cout << "Ingrese año de fabricación del vehículo: ";
    std::cin >> año_fabricacion;
    std::cout << "Ingrese color del vehículo: ";
    std::cin >> color;
    std::cout << "Ingrese la cilindrada del vehículo: ";
    std::cin >> cilindrada;

    Motor_vehiculo vehiculo(marca,tipo_combustible,año_fabricacion,color,cilindrada);
    vehiculo.detalles_coche();
    
    return 0;
}