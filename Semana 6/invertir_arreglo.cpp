#include <iostream>
void imprimir_Arreglo(const int arreglo[], int tamaño);
void invertir_Arreglo(const int arreglo[], int tamaño);

int main()
{
    int arreglo[] = {1,4,5,7,8,9,0,9};
    imprimir_Arreglo(arreglo,8);
    invertir_Arreglo(arreglo,8);
    return 0;
}

void imprimir_Arreglo(const int arreglo[], int tamaño)
{
    for (int i = 0; i < tamaño; i++) //recorremos el arreglo desde el elemento 0 al elemento n;
    {
        std::cout << arreglo[i] << " ";  //se imprime cada uno de los elementos 
    }
}

void invertir_Arreglo(int arreglo[], int tamaño)
{
    for (int i = 0; i < tamaño/2; i++)
    {
        int x = arreglo[i];
        arreglo[i] = arreglo[tamaño - 1 - i];
        arreglo[tamaño - 1 - i] = x;
    }
}


