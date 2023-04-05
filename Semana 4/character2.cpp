#include <iostream>

int main()
{
    char car1 , car2;
    std::cout << "Ingrese el primer caracter: ";
    std::cin >> car1;
    std::cout << "Ingrese el segundo caracter: ";
    std::cin >> car2;

    int val1 = static_cast<int>(car1);
    int val2 = static_cast<int>(car2);

    if ( (val1 >= 48 && val1 <= 57) && (val2 >= 48 && val2 <= 57))
    {
        int suma = (val1 -'0') + (val2 - '0');
        std::cout << "La suma es: " << suma << std::endl;
    }
    else
    {
        std::cout << "Uno o ambos caractereres no representan un número"<< std::endl;
    }


}