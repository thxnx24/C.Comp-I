#include <iostream>

bool palin(int arr[],  int ini, int fin)
{
    if(ini >= fin)
    {    
        return 1;
    }
    else if(arr[ini] == arr[fin])
    {
        palin(arr,ini+1,fin-1);
    }
    else
    {
        return false;
    }
}

int si_no_palindromo(int arr[],int tam)
{
    bool pal = palin(arr,0,tam-1);
    if(pal == true)
        std::cout << "El arreglo es palindromo";
    else
    {
        std::cout << "El arreglo no es palindromo";
    }
    return 0;
}

int main()
{
    int arr[] = {1,2,3,5,4,2,1};
    
    si_no_palindromo(arr, 5);
    
    return 0;
}