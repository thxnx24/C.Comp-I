#include <iostream>
#include <string>

int cant_digitos(long long num)
{
    int contador;
    while (num >= 0)
    {
        num /= 10;
        contador++;
    }
    return contador;
}


int main()
{
    long long  num;
    std::cout << "Ingrese un numero: " ; std::cin >> num;
    std::cout << "El numero "<< num << " tiene "<< cant_digitos(num) << " digitos";
    
    return 0;

}