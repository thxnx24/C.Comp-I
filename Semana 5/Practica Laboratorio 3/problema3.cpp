/*Los factores primos de 13195 son 5, 7, 13 y 29.
¿Cuál es el mayor factor primo del número 600851475143?
*/

#include <iostream>

int main()
{
    long long num = 600851475143;

    for (int i = 3; i != num; i += 2)
    {
        if (num % i == 0) 
        {
            num = num / i;
        }
    }
    std::cout << "El mayor numero primo de: " << num;
    return 0;
}