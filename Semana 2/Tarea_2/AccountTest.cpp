#include <iostream>
#include "Account.h"


int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    std::cout << "account 1" << account1.getName() << "balance is $" << account1.getBalance();
    std::cout << "account 2" << account2.getName() << "balance is $" << account2.getBalance();

    std::cout << "\n\nEnter deposit ammount for account1: ";
    int depositAmount;
    std::cin >> depositAmount;

    std::cout << "adding" << depositAmount << "to account 1 balance";
    account1.deposit(depositAmount);


    std::cout << "\n\naccount1: " << account1.getName() << " balance is $"<< account1.getBalance();
    std::cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();


    std::cout << "\n\nEnter deposit amount for account2: ";
    std::cin >> depositAmount;
    std::cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount);


    std::cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance(); 
    std::cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance() << std::endl; 

}