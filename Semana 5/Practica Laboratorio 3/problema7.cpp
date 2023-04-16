/*Al enumerar los primeros seis números primos: 2, 3, 5, 7, 11 y 13, podemos ver que el sexto primo es 13.
¿Cuál es el número primo 10 001?
*/

#include <iostream>

int main()
{
    int contador{2};
    int primo{0};
    bool encontrar_primo{true};

    for (int i = 3; contador <10002; i ++)
    {
        for (int j = 2; j < i; j ++)
        {
            encontrar_primo = true;
            if (i % j == 0)
            {
                encontrar_primo = false;
                break;
            }
            if (contador == 10001)
            {
                primo = i;
            }
        }
        if (encontrar_primo == true)
        {
            contador += 1;
        }
    }
    std::cout << "El numero primo 10001 es el " << primo ;
    return 0;
}