#include <iostream>
//lo que mas se utiliza es el paso x referencia 
void intercambio(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
    std::cout << "valor de q en intercambio es " << a << std::endl;
    std::cout << "valor de r en intercambio es " << b << std::endl;
}

int main()
{
    int q{3};
    int r{5};
    intercambio(q,r);
    std::cout << "valor de q en main es " << q << std::endl;
    std::cout << "valor de r en main es " << r << std::endl;
}