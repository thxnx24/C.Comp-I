//Fig 11.10: BasePlusCommissionEmployee2

#ifndef BASEPLUS2_H
#define BASEPLUS2_H

#include <string> 
#include "CommissionEmployee2.h" 

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
