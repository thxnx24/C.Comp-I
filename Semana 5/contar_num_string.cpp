#include <iostream>
#include <string>

bool esnumero(char car)
{
    return (car >= 48 && car <= 57);
}

int contar_num_string(std::string cad)
{
    int contador{0};
    for (int i = 0; i < cad.length(); i++)
    {    
        if (esnumero(cad.at(i)))
        {
            contador++;
        }
    }    
    return contador;
}


int main ()
{
    std::string cad;

    std::cout << "Ingrese una cadena por favor: " ; std::cin >> cad;
    std::cout << "Hay " << contar_num_string(cad) << " numeros" <<" en la cadena ";
    return 0;

}