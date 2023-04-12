#include <iostream>

bool verificar_caracter(char n)
{
    int val = static_cast<int>(n);
    if (val >= 48 && val <= 57)
    {  
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    char n;
    std::cout << "Ingrese un char: " ; std::cin >> n;
    std::cout << verificar_caracter(n);
    return 0;

}