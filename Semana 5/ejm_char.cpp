#include <iostream>

bool verificar_caracter(char n)
{
    int val = static_cast<int>(n);
    if ((val >= 65 && val <= 90)||(val >= 97 && val <= 122))
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