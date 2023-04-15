/*Cada nuevo término en la sucesión de Fibonacci se genera sumando los dos términos anteriores. 
Al comenzar con 1 y 2, los primeros 10 términos serán:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
Al considerar los términos en la sucesión de Fibonacci cuyos valores no superan los cuatro millones, 
encuentre la suma de los términos de valor par.
*/

#include <iostream>

long long suma_par_fib(int a)
{
    int n = 1, m = 2, y = 0;
    while (n < a)
    {
        if(n % 2 == 0)
        {
            y += n;
        }
        int x = m + n;
        n = m;
        m = x;
    }
    return y;
}
int main()
{
    std::cout <<"El resultado de la suma de los numeros pares en la sucesión fibonacci es: "
    << suma_par_fib(4000000) << std::endl;
    return 0;
}