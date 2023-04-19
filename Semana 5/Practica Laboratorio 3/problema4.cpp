/*Un número palindrómico se lee igual en ambos sentidos. 
El palíndromo más grande hecho del producto de dos números de 2 dígitos es 9009 = 91 × 99.
Encuentra el palíndromo más grande hecho del producto de dos números de 3 dígitos.
*/

#include <iostream>

int revertir_num(int numero)
{
    int rev_num = 0;
    int remanente = 0;
    while(numero != 0)
    {
        remanente = numero % 10;
        rev_num = rev_num * 10 + remanente;
        numero /= 10;
    }
    return rev_num;
}

bool es_pal(int n)
{
    if(revertir_num(n) == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int producto{0};
    int mayor_Pal{0};
    
    for(int i = 100; i < 1000; i++)
    {
        for(int j = 100; j < 1000; j++)
        {
            producto = i * j;   
            if(es_pal(producto) && mayor_Pal == 0)
            {
                mayor_Pal = producto;
            }
            else if (es_pal(producto) && mayor_Pal != 0)
            {
                if(producto > mayor_Pal)
                {
                    mayor_Pal = producto;
                }
            }
        }
    }
    std::cout << mayor_Pal << std::endl;
    return 0;
}