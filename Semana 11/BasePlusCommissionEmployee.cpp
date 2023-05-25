//Fig 11.8: BasePlusCommissionEmployee.cpp

#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <sstream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string& first, const string& last, const string& ssn,
    double sales, double rate, double salary) 
    {
        firstName = first; 
        lastName = last; 
        socialSecurityNumber = ssn; 
        setGrossSales(sales); 
        setCommissionRate(rate); 
        setBaseSalary(salary);
    }

void BasePlusCommissionEmployee::setFirstName(const string& first) 
{
    firstName = first; 
}

string BasePlusCommissionEmployee::getFirstName() const 
{
    return firstName;
}

void BasePlusCommissionEmployee::setLastName(const string& last) 
{
    lastName = last; 
}

string BasePlusCommissionEmployee::getLastName() const 
{
    return lastName;
}

void BasePlusCommissionEmployee::setSocialSecurityNumber(const string& ssn) 
{
    socialSecurityNumber = ssn;
}

string BasePlusCommissionEmployee::getSocialSecurityNumber() const 
{
    return socialSecurityNumber;
} 

void BasePlusCommissionEmployee::setGrossSales(double sales) 
{
    if (sales < 0.0) 
    {
        throw invalid_argument("Gross sales must be >= 0.0");
    }

    grossSales = sales;
}

double BasePlusCommissionEmployee::getGrossSales() const 
{
    return grossSales;
}

void BasePlusCommissionEmployee::setCommissionRate(double rate) 
{
    if (rate <= 0.0 || rate >= 1.0) 
    {
        throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
    }
    
    commissionRate = rate;
}

double BasePlusCommissionEmployee::getCommissionRate() const 
{
    return commissionRate;
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

//Fig 11.9: fig11_09.cpp

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
