#include <iostream>

void intercambio(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void invertir_rec(int arr[],const int tam,int i = 0)
{
    if(i == tam/2)
    {
        return;
    }  
    intercambio(arr[i], arr[tam-i-1]);
    invertir_rec(arr, tam, ++i);
        
}

void imprimir(const int arra[],const int tam)
{
    std::cout << "El arreglo invertido recursivamente es: ";
    for(int i = 0; i < tam; i++)
    {
        std::cout << arra[i] << " ";
    } 
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    
    invertir_rec(arr, 7) ;
    imprimir(arr,7);
    
    return 0;
}