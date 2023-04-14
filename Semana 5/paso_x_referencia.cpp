#include <iostream>

void incrementar(int &a)
{
    a = a + 1;
    std::cout << "A dentro de la funcion incrementar " << a << std::endl;
}

int main()
{
    int q = 3;
    incrementar(q);

    std::cout <<"Q en la función main " << q << std::endl;
    return 0;
}