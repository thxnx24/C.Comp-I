#include <iostream>
#include "Account.h"


int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    std::cout << "Cuenta 1: " << account1.getName() << " el saldo es  $" << account1.getBalance() << std::endl;
    std::cout << "Cuenta 2: " << account2.getName() << " el saldo es $" << account2.getBalance();

    std::cout << "\n\nIntroducir el importe del depósito a la cuenta1: ";
    int depositAmount;
    std::cin >> depositAmount;

    std::cout << "añadiendo $" << depositAmount << " a la cuenta1 saldo $";
    account1.deposit(depositAmount);


    std::cout << "\n\nCuenta1: " << account1.getName() << " el saldo es  $"<< account1.getBalance();
    std::cout << "\nCuenta2: " << account2.getName() << " el saldo es  $" << account2.getBalance();


    std::cout << "\n\nIntroducir el importe del depósito a la cuenta1: ";
    std::cin >> depositAmount;
    std::cout << "añadiendo $" << depositAmount << " a la cuenta2 saldo $";
    account2.deposit(depositAmount);


    std::cout << "\n\nCuenta1: " << account1.getName() << " el saldo es  $" << account1.getBalance(); 
    std::cout << "\nCuenta2: " << account2.getName() << " el saldo es  $" << account2.getBalance() << std::endl; 

}