#include <iostream>
#include <string>


int verifica_char_string(std::string cad, char car)
{
    int contador{0};
    for (int x = 0; x < cad.length() ; x++){
        if (car == cad.at(x))
        {
            contador++;
        }
    }
    return contador;
}

int main ()
{
    std::string cad;
    char car;
    
    std::cout << "Ingrese una cadena por favor: ";std::cin >> cad;
    std::cout << "Ingrese un caracter por favor: ";std::cin >> car;

    std::cout << "El caracter "<< car << " se repite "  << verifica_char_string( cad, car) << " veces ";
    
    return 0;
}