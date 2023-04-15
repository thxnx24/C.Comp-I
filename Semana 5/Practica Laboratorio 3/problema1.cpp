/*Si enumeramos todos los números naturales debajo de 10 que son múltiplos de 3 o 5, obtenemos 3, 5, 6 y 9. 
La suma de estos múltiplos es 23.
Encuentra la suma de todos los múltiplos de 3 o 5 por debajo de 1000.
*/

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