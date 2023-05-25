//Fig 11.10: BasePlusCommissionEmployee2

#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> 
#include "fig11.12.h" 

class BasePlusCommissionEmployee : public CommissionEmployee
{
    public:
        BasePlusCommissionEmployee(const std::string&, const std::string&,
            const std::string&, double = 0.0, double = 0.0, double = 0.0);

        void setBaseSalary(double); 
        double getBaseSalary() const; 

        double earnings() const; 
        std::string toString() const; 
    private:
        double baseSalary; 
};

#endif
