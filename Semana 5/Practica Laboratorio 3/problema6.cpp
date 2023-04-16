/*La suma de los cuadrados de los diez primeros números naturales es 385

El cuadrado de la suma de los primeros diez números naturales es 3025

Por tanto, la diferencia entre la suma de los cuadrados de los diez primeros números naturales 
y el cuadrado de la suma es 2640

Encuentra la diferencia entre la suma de los cuadrados de los primeros cien números naturales
y el cuadrado de la suma.
*/

#include <iostream>

int main()
{
    long long x{0};
    long long y{0};
    long long diferencia;
    for (int i = 0; i <= 100; i++)
    {
        x += (i*i);
        y += i; 
    }
    diferencia = (y*y) - x;
    std::cout << "La diferencia entre la suma de cuadrados y el cuadrado de la suma es: " << diferencia;

    return 0;
}

