#include <iostream>
#include <string>

int cant_digitos(long long num)
{
    int contador{0};
    while (num > 0)
    {
        num /= 10;
        contador++;
    }
    return contador;
}

int main()
{
    std::cout << cant_digitos(12343545) ;
    return 0;
}