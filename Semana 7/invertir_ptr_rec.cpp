#include <iostream>
void intercambio(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void invertir_rec(int *ini, int *fin)
{
    if (ini >= fin)
    {
        return;
    }
    intercambio(*ini, *fin);
    invertir_rec(++ini,--fin);

}

void imprimir(int arr[], int size)
{
    for (int i{0}; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}
int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    imprimir(arr,size);
    
    invertir_rec(arr, arr + size - 1);
    
    std::cout << std::endl;
    imprimir(arr,size);
    return 0;
}