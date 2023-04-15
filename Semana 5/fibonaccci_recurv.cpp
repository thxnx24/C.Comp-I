#include <iostream>

long long fibonnacci(int n)
{
    if ((n == 0)|| (n == 1))
    {
        return 1;
    }
    else
    {
        return fibonnacci(n - 2) + fibonnacci (n - 1);
    }
}

int main()
{
    int n;

    std::cout << "Ingrese un número: " ; std::cin >> n;

    std::cout << "El fib de " << n << " es " << fibonnacci(n) << std::endl;
    return 0;
}