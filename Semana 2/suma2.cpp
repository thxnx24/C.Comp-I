#include <iostream>

int main() {
    int a{0};
    int b{0}; 
     
    std::cout << "Ingrese a: ";
    std::cin >> a;

    std::cout << "Ingrese b: ";
    std::cin >> b;

    int suma{a+b};

    std::cout << "La suma de a + b es: " << suma ;
    
}