//Fig 11.11:  BasePlusCommissionEmployee2.cpp

#include <iomanip>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "fig11.10.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string& first, const string& last, const string& ssn,
    double sales, double rate, double salary)
    
    :CommissionEmployee(first, last, ssn, sales, rate){
    setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if (salary < 0.0)
    {
        throw invalid_argument("Salary must be >= 0.0");
    }
    baseSalary = salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const 
{
    return baseSalary;
} 

double BasePlusCommissionEmployee::earnings() const
{
    return baseSalary + (commissionRate * grossSales);
}

string BasePlusCommissionEmployee::toString() const
{
    ostringstream output;
    output << fixed << setprecision(2); 
    
    output << "base-salaried commission employee: " << firstName << ' '
        << lastName << "\nsocial security number: " << socialSecurityNumber
        << "\ngross sales: " << grossSales
        << "\ncommission rate: " << commissionRate
        << "\nbase salary: " << baseSalary;
    return output.str();
}

int main() 
{
    BasePlusCommissionEmployee employee{"Bob", "Lewis", "333-33-3333",
        5000, .04, 300};

    cout << fixed << setprecision(2);
    cout << "Employee information obtained by get functions: \n"
        << "\nFirst name is " << employee.getFirstName()
        << "\nLast name is " << employee.getLastName()
        << "\nSocial security number is " << employee.getSocialSecurityNumber()
        << "\nGross sales is " << employee.getGrossSales()
        << "\nCommission rate is " << employee.getCommissionRate()
        <<  "\nBase salary is " << employee.getBaseSalary() << endl;
    employee.setBaseSalary(1000);
    cout << "\nUpdated employee information from function toString: \n\n"
        << employee.toString();

    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
}