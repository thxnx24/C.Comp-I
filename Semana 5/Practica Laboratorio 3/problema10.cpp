/*La suma de los números primos por debajo de 10 es 2 + 3 + 5 + 7 = 17.

Encuentra la suma de todos los números primos por debajo de dos millones.
*/

#include <iostream>

bool verificador (long long num) 
{
    for (int i = 2; i * i <= num; i++) 
    { 
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    long long suma{0};
    for(int i = 2; i <= 2000000; i++) 
    {
        if(verificador(i))
        {
            suma = suma + i;
        }
    }
    std::cout << "La suma de todos lo números primos hasta el 2000000 es: " << suma << std::endl;
    return 0;
}