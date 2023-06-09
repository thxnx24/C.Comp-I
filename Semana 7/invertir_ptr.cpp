#include <iostream>

void intercambio(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void invertir_array(int* arr, int size) 
{
    int* ini = arr;
    int* fin = arr + size - 1;
    
    while (ini < fin) 
    {
        intercambio(*ini,*fin);
        ini++;
        fin--;
    }
}
void imprimir(int arr[], int size)
{
    for (int i{0}; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Imprimir el arreglo original
    imprimir(arr,size);
    
    // Invertir el arreglo
    invertir_array(arr, size);
    
    std::cout << std::endl;
    imprimir(arr,size);
    return 0;
}
