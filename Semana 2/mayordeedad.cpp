//Impletar un programa que soicite por teclado un numoer que represente la edad de la persona , e imprima si dicha edad pertenece a una persona mayor de edad

#include <iostream>

int main()
{
    int edad{0};

    std::cout << "Ingrese la edad del usuario: ";
    std::cin >> edad;

    if (edad >= 18)
    {
        std::cout << "El usuario es mayor de edad ";
    }
    else
    {
        std::cout << "El usuario no es mayor de edad ";
    }    
}