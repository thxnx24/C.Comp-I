#include <iostream>
using namespace std;
void intercambio(int &a, int &b);
void invertir(int arr[],const int tam);
void imprimir(const int arra[],const int tam);

int main() {
    int array[] = {1, 2, 3, 8, 5, 12, 6, 7};
    
    invertir(array, 8) ;
    imprimir(array, 8);
    
    return 0;
}

void intercambio(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void invertir(int arr[],const int tam)
{
    for(int i = 0; i <tam/2;i++)
    {
        intercambio(arr[i],arr[tam-i-1]);
    }
}

void imprimir(const int arra[],const int tam)
{
    std::cout << "El arreglo invertido es: ";
    for(int i = 0; i < tam; i++)
    {    
        cout << arra[i] << " ";
    }
}