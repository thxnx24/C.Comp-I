#include <iostream>

bool es_palindromo_rec(int *ini, int *fin)
{
    if (ini >= fin)
    {
        return true;
    }
    if (*ini != *fin)
    {
        return false;
    }
    return es_palindromo_rec(++ini, --fin);
}

int main()
{
    int arr[] = {1,2,3,4,3,2,1};
    int tam = sizeof(arr) / sizeof (arr[0]);

    std::cout << es_palindromo_rec(arr, arr + tam -1) << std::endl;
    return 0;
}