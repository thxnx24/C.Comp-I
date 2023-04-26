#include <iostream>

int palindromo(int array[],  int tam)
{
    int t;
    for(int i = 0; i < tam/2; i++)
    {
        if(array[i] == array[tam-i-1])
        {
            t = 1;
        }
        else
        {
            t = 0;
        }    
    }
    if(t == 1)
    {
        std::cout <<"El arreglo es palindromo";
    }
    else
    {
        std::cout <<"El arreglo no es palindromo";
    }
    return 0;
}

int main()
{
    int array[] = {1,3,4,2,3,2,1};
    
    palindromo(array,7);
    
    return 0;
}