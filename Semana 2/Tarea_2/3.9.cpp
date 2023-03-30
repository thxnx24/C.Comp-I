#include <iostream>
#include "3.9.h"


int main()
{
    Cuenta cuenta1{"Jane Green", 50};
    Cuenta cuenta2{"John Blue", -7};

    std::cout << "Cuenta 1: " << cuenta1.obtener_nombre() << " el saldo es  $" << cuenta1.obtener_saldo() << std::endl;
    std::cout << "Cuenta 2: " << cuenta2.obtener_nombre() << " el saldo es $" << cuenta2.obtener_saldo();

    int depositAmount;
    std::cout << "\n\nIntroducir el importe del depósito a la cuenta1: ";
    std::cin >> depositAmount;
    std::cout << "añadiendo $" << depositAmount << " a la cuenta1 saldo $";
    cuenta1.deposito(depositAmount);

    std::cout << "\n\nCuenta1: " << cuenta1.obtener_nombre() << " el saldo es  $"<< cuenta1.obtener_saldo();
    std::cout << "\nCuenta2: " << cuenta2.obtener_nombre() << " el saldo es  $" << cuenta2.obtener_saldo();

    std::cout << "\n\nIntroducir el importe del depósito a la cuenta2: ";
    std::cin >> depositAmount;
    std::cout << "añadiendo $" << depositAmount << " a la cuenta2 saldo $";
    cuenta2.deposito(depositAmount);

    std::cout << "\n\nCuenta1: " << cuenta1.obtener_nombre() << " el saldo es  $" << cuenta1.obtener_saldo(); 
    std::cout << "\nCuenta2: " << cuenta2.obtener_nombre() << " el saldo es  $" << cuenta2.obtener_saldo() << std::endl; 

    int retiro_dinero;
    std::cout << "\nIntroduzca la cantidad a retirar de la cuenta1 por favor: ";
    std::cin >> retiro_dinero;
    std::cout << "Retirando $" << retiro_dinero << " de la cuenta1: ";
    cuenta1.retirar(retiro_dinero);

    std::cout << "\n\nCuenta1: " << cuenta1.obtener_nombre() << " el saldo es  $"<< cuenta1.obtener_saldo();
    std::cout << "\nCuenta2: " << cuenta2.obtener_nombre() << " el saldo es  $" << cuenta2.obtener_saldo();

    std::cout << "\nIntroduzca la cantidad a retirar de la cuenta2 por favor: ";
    std::cin >> retiro_dinero;
    std::cout << "Retirando $" << retiro_dinero << " de la cuenta2: ";
    cuenta2.retirar(retiro_dinero);

    std::cout << "\n\nCuenta1: " << cuenta1.obtener_nombre() << " el saldo es  $"<< cuenta1.obtener_saldo();
    std::cout << "\nCuenta2: " << cuenta2.obtener_nombre() << " el saldo es  $" << cuenta2.obtener_saldo();


}