#include <iostream>

void invertir_array(int arr[], const int tam)
{
    int *ptr1 = nullptr;
    int *ptr2 = nullptr;
    int temp = 0;
    
    for (int i = 0; i < tam/2; ++i)
    {
        ptr1 = &arr[i];
        ptr2 = &arr[tam - i - 1];
        *ptr2 = arr[tam - i -1];
    }
}

void imprimir(int arr[], const int tam)
{
    for (int i{0}; i < tam; ++i)
    {
        std::cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {2,3,5,6,7,1};
    invertir_array(arr,6);
    imprimir(arr,6);
    return 0;
}