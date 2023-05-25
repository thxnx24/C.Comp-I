#include <iostream>
#include<iomanip>
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

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    if (salary < 0.0) {
        throw invalid_argument("Salary must be >= 0.0");
    }

    baseSalary = salary;
}

double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
    return getBaseSalary() + CommissionEmployee::earnings();
}

string BasePlusCommissionEmployee::toString() const {
    ostringstream output;
    output << "base-salaried " << CommissionEmployee::toString()
        << "\nbase salary: " << getBaseSalary();
    return output.str();
}

int main()
{
    CommissionEmployee employee{"Sue","Jones","222-22-2222",10000, .06};

    cout << fixed << setprecision(2);
    cout << "Employee information obtained by get functions: \n"
        << "\nFisrt name is " << employee.getFirstName()
        << "\nLast name is " << employee.getLastName()
        << "\nSocial security name is " 
        << employee.getSocialSecurityNumber()
        << "\nGross sales is " << employee.getGrossSales()
        << "\nCommission rate is " <<employee.getCommissionRate() << endl;

    employee.setGrossSales(8000);
    employee.setCommissionRate(.1);
    cout << "\nUpdated employee information from function toString: \n\n" 
        << employee.toString();
    
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
}