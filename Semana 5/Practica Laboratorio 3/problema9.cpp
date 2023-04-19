/*Un triplete pitagórico es un conjunto de tres números naturales, a < b < c , para los cuales,
un^2 + segundo^2 = do^2

Por ejemplo, 3^2 + 4^2 = 9 + 16 = 25 = 5^2 

Existe exactamente un triplete pitagórico para el cual a + b + c = 1000.
Encuentra el producto abc .
*/

#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    int producto;

    for (a=1; a <= 500; a++)
    {
        for (b = 1; b <= 500; b++)
        {
            c = 1000 - b - a;
            if (a*a + b*b - c*c == 0 && a < b )
            {
                producto = a * b * c;
                std::cout << "El producto de a*b*c es: "<< producto << std::endl;
                std::cout << "Los numeros son: " << a << ", " << b << ", " << c;
            }
        }
    }
    return 0;
}