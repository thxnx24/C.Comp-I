#include <iostream>
#include "3.9.h"


int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    std::cout << "Cuenta 1: " << account1.obtener_nombre() << " el saldo es  $" << account1.obtener_saldo() << std::endl;
    std::cout << "Cuenta 2: " << account2.obtener_nombre() << " el saldo es $" << account2.obtener_saldo();

    std::cout << "\n\nIntroducir el importe del depósito a la cuenta1: ";
    int depositAmount;
    std::cin >> depositAmount;

    std::cout << "añadiendo $" << depositAmount << " a la cuenta1 saldo $";
    account1.deposito(depositAmount);


    std::cout << "\n\nCuenta1: " << account1.obtener_nombre() << " el saldo es  $"<< account1.obtener_saldo();
    std::cout << "\nCuenta2: " << account2.obtener_nombre() << " el saldo es  $" << account2.obtener_saldo();


    std::cout << "\n\nIntroducir el importe del depósito a la cuenta1: ";
    std::cin >> depositAmount;
    std::cout << "añadiendo $" << depositAmount << " a la cuenta2 saldo $";
    account2.deposito(depositAmount);


    std::cout << "\n\nCuenta1: " << account1.obtener_nombre() << " el saldo es  $" << account1.obtener_saldo(); 
    std::cout << "\nCuenta2: " << account2.obtener_nombre() << " el saldo es  $" << account2.obtener_saldo() << std::endl; 

    
    std::cout << "\nIntroduzca la cantidad a retirar de la cuenta1 por favor: ";
    int retiro_dinero;
    std::cin >> retiro_dinero;
    std::cout << "Retirando $" << retiro_dinero << " de la cuenta1: ";
    account1.retirar(retiro_dinero);

}