#include <iostream>

int main()
{
    char caracter;
    std::cout << "Ingrese un caracter";
    std::cin >> caracter;

    int val = static_cast<int>(caracter);
    if ( (val >= 65 && val <= 90) || (val >= 97 && val <=122))
        std::cout << "Es una letra";
    else
    {
        std::cout << "No es una letra ";
    }
    return 0;
    
}
