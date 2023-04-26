#include <iostream>

int palindromo(int arr[],  int tam);

int main() 
{
    int arr[] = {1,2,3,2,2,3,4,1};
    
    palindromo(arr,8);
    
    return 0;
}

int palindromo(int arr[],  int tam)
{
    int t;
    for(int i = 0; i < tam / 2; i++)
    {
        if(arr[i] == arr[tam-i-1])
        {
            t = 1;
        }
        else{
            t = 0;
        }    
    }
    if(t == 1)
    {
        std::cout<<"El arreglo es palindromo";
    }
    else
    {
        std::cout<<"El arreglo no es palindromo";
    }
    return 0;
}