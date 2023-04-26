#include <iostream>

void insertion_sort(int arr[],int tam);
void imprimir(const int arra[],const int tam);

int main()
{
    int arreglo[]={4,1,2,3,5,6,8,0,7};
      
    insertion_sort(arreglo,9);
    imprimir(arreglo,9);

    return 0;
}

void insertion_sort(int arr[],int tam)
{
    for(int i = 1; i < tam; i++)
    {
        int al{i};
        int camb = arr[i];

        while((al > 0) && (arr[al-1] > camb))
        {
            arr[al] = arr[al - 1];
            al--;
        }
        arr[al] = camb;
    }    
}

void imprimir(const int arra[],const int tam)
{
    std::cout << "El arreglo ordenado por InsertionSort es: ";
    for(int i = 0; i < tam; i++)
    {    
        std::cout << arra[i] << " ";
    }
}

    
