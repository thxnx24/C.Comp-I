/*Un triplete pitagórico es un conjunto de tres números naturales, a < b < c , para los cuales,
un^2 + segundo^2 = do^2

Por ejemplo, 3 2 + 4 2 = 9 + 16 = 25 = 5 2 .

Existe exactamente un triplete pitagórico para el cual a + b + c = 1000.
Encuentra el producto abc .
*/

#include <iostream>

int main()
{
    int max{1000};
    int x;

    for(int a = 1; a < max; a++)
    {
        for (int b = a + 1; b < a; b++)
        {
            for (int c = b + 1; b < max; c++)
            {
                if (a < b && b < c)
                {
                    int suma = (a * a) + (b*b);
                    if (suma == c * c)
                    {
                        if (a + b + c == max)
                        {
                            x = a * b *c;
                            max = (a +b + c) + 1;
                        }
                        else
                        {
                            ++a;
                        }
                    }
                }
            }
        }
    }
    std::cout<<"El producto de a * b * c en donde (a + b + c) = 1000 es: " << x;
    return 0;
}