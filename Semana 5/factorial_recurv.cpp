#include <iostream>

long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    { 
        return n * factorial(n-1);
    }
}

int main()
{
    int n;
    std::cout << "Ingrese un número por favor: "; std::cin >> n;

    std::cout << "El factorial de " << n << " es " << factorial(n);
    return 0;
}