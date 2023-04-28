#include <iostream>

bool es_palindromo(int *arr, const int tam)
{
    int *fin{arr + tam - 1};
    while(arr <= fin)
    {
        if (*arr++ != *fin--)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {1,2,3,4,3,2,1};
    std::cout << es_palindromo(arr,7) << std::endl ;
    return 0;
}