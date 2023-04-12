// fibonacci en  funcion c++

#include <iostream>

long long fibonacci (int n)
{
    long long n1,n2,n3, fib;
    n1 = n2 = fib = 1;

    for (int i = 1; i < n; i ++)
    {
        fib = n1 + n2;
        n1 = n2;
        n2 = fib;
    }
    return fib;
}

void imprimirfibo(int n)
{
    for (int i = 0; i < n; i ++)
    {
        std::cout << fibonacci(i) << " ";
    }
}
int main ()
{
    int n;
    std::cout << "Ingrese un número por favor: "; std::cin >> n;
    imprimirfibo(n);
    //std::cout << "El fibonacci de " << n << " es " << fibonacci(n);

    return 0;
} 
