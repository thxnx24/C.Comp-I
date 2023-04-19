/*2520 es el número más pequeño que se puede dividir por cada uno de los números del 1 al 10 sin resto.
¿Cuál es el número positivo más pequeño que es divisible por todos los números del 1 al 20?
*/

#include <iostream>

long long maximmo_divisor( long long x,  long long y)
{
    while(x!= 0)
    {
        long long z = x;
        x = y % x;
        y = z;
    }
    return y; 
}

 long long minimo_multiplo( long long a,  long long b)
    {
        return a * (b / (maximmo_divisor(a,b)));
    }

int main()
{
     long long resultado{1};

    for(int i = 2; i <= 20; ++i)
    {
        resultado = minimo_multiplo(resultado,i);
    }

    std::cout << "El menor número que es divisible entre 1 a 20 es: "<< resultado << std::endl;
    return 0;
}