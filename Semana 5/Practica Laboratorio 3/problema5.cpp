#include <iostream>

long long maximmo_divisor( long long x,  long long y)
{
    while(x!= 0)
    {
        long long z=x;
        x = y%x;
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

    for(int i=2; i<=20; ++i)
    {
        resultado = minimo_multiplo(resultado,i);
    }

    std::cout << "El menor número que es divisible entre 1 a 20 es: "<< resultado << std::endl;
    return 0;
}