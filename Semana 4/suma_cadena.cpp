/*Implemente un programa que solicite por teclado una cadena, 
*la cual contendra unicamente numeros e imprima la suma de los digitos de dicho numero
*/

#include <iostream>

int main()
{
    std::string cadena;
    std::cout << "Ingrese una cadena por favor: ";
    std::cin >> cadena;

    int suma{0};

    for (int i = 0 ; i < cadena.length(); i++)
    {
        suma += (cadena.at(i) - '0');
    }
    std::cout << "La suma de la cadena es: " << suma << std::endl;
    return 0;
}