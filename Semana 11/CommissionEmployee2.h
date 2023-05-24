//fig 11.12
#ifndef COMISSION_H
#define COMMISION_H
#include <string>

class CommissionEmployee
{
    public:
        CommissionEmployee(const std::string&, const std::string&, 
            const std::string&, double = 0.0, double = 0.0);
        
        void setFirstName(const std::string&);
        std::string getFirstName() const;

        void setLastName(const std::string&);
        std::string getLastName() const;

        void setSocialSecurityNumber(const std::string&);
        std::string getSocialSecurityNumber() const;

        void setGrossSales(double);
        double getGrossSales() const;

        void setCommissionRate(double);
        double getCommissionRate() const;

        double earnings() const;
        std::string toString() const;
    
    protected:
        std::string firstName;
        std::string lastName;
        std::string socialSecurityNumber;
        double grossSales;
        double commissionRate;
};
#endif