/**implemente un programa que solicite por teclado una cadena y un caracter, 
* e imprima la cantidad de veces que el caracter se encuentra en esta cadena.
*/

#include  <iostream>


int main()
{
    std::string cadena;
    char caracter;
    int contador;
    
    std::cout << "Ingrese una cadena por favor: ";
    std::cin >> cadena;
    std::cout << "Ingrese un caracter por favor: ";
    std::cin >> caracter;


    for (int x = 0; x < cadena.length() ; x++)
        if (caracter == cadena.at(x))
        {
            contador++;
        }
        std::cout << "El caracter "<< caracter << " se repite "<< contador << " veces!! " << std::endl;
    return 0;
}


