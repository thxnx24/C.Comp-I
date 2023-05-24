#include <iomanip>
#include <stdexcept>
#include <iostream>
#include <sstream>
#include "CommissionEmployee.h"

using namespace std;

CommissionEmployee::CommissionEmployee(const string& first,
    const string& last, const string& ssn, double sales, double rate){
        firstName = first;
        lastName = last;
        socialSecurityNumber = ssn;
        setGrossSales(sales);
        setCommissionRate(rate);
    }

    void CommissionEmployee::setFirstName(const string& first)
    {
        firstName = first;
    }

    string CommissionEmployee::getFirstName() const {return firstName;}

    void CommissionEmployee::setLastName(const string& last)
    {
        lastName = last;
    }

    string CommissionEmployee::getLastName() const {return lastName;}

    void CommissionEmployee::setSocialSecurityNumber(const string& ssn)
    {
        socialSecurityNumber = ssn;
    }

    string CommissionEmployee::getSocialSecurityNumber() const 
    {
        return socialSecurityNumber;
    }

    void CommissionEmployee::setGrossSales(double sales)
    {
        if (sales <= 0.0)
        {
            throw invalid_argument("Gross sales must be >= 0.0");
        }

        grossSales = sales;
    }

    double CommissionEmployee::getGrossSales() const {return grossSales;}

    void CommissionEmployee::setCommissionRate(double rate)
    {
        if (rate <= 0.0 || rate >= 1.0)
        {
            throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
        }

        commissionRate = rate;
    }

    double CommissionEmployee::getCommissionRate() const 
    {
        return commissionRate;
    }

    double CommissionEmployee::earnings() const
    {
        return commissionRate * grossSales;
    }

    string CommissionEmployee::toString() const 
    {
        ostringstream output;
        output << fixed << setprecision(2);
        output << "commission employee: " << firstName << " " << lastName
            << "\nsocial security number: " << socialSecurityNumber
            << "\ngross sales: " << grossSales
            << "\ncommission rate: " <<  commissionRate;
        return output.str();
    }
int main()
{
    CommissionEmployee employee{"Sue","Jones","222-22-2222",10000, .06};

    cout << fixed << setprecision(2);
    cout << "Employee information obtained by get functions: \n"
        << "\nFisrt name is " << employee.getFirstName()
        << "\nLast name is " << employee.getLastName()
        << "\nSocial security name is " << employee.getSocialSecurityNumber()
        << "\nGross sales is " << employee.getGrossSales()
        << "\nCommission rate is " <<employee.getCommissionRate() << endl;

    cout << "\nUpdated employee information from function toString: \n\n" 
        << employee.toString();
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
}