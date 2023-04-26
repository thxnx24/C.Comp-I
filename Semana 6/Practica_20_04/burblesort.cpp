#include <iostream>
void BubbleSort(int a[], int n);
void imprimir(const int arra[], const int tam);

int main()
{
    int array[]={1,2,5,3,4,6,4,5,2,1,7,88,5};
    
    BubbleSort(array,13);
    imprimir(array,13);
    
    return 0;
}

void BubbleSort(int array[], int n)
{
    int aux;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = n; j >= i; j--)
        {
            if(array[j-1] > array[j])
            {
                aux = array[j-1];
                array[j-1] = array[j];
                array[j] = aux;
            }
        }
    }
}

void imprimir(const int arra[], const int tam)
{
    std::cout << "El arreglo ordenado por Bublesort es: ";
    for(int i = 0; i < tam; i++)
    {    
        std::cout << arra[i] << " ";
    }
}

