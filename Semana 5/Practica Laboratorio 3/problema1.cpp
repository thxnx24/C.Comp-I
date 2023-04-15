#include <iostream>

int main()
{
    int suma{0};
    for(int x=1; x<1000; ++x)
    {
        if(x % 3 == 0 || x % 5 == 0)
        {
            suma += x;
        }
    }
    std::cout<<"La suma de los múltiplos de 3 y 5 por debajo del 1000 es: " << suma;

    return 0;
}