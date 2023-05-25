#ifndef COMMISSION_H
#define COMMISSION_H

#include <string>

class CommissionEmployee 
{
    public:
        CommissionEmployee(const std::string&, const std::string&,
            const std::string&, double = 0.0, double = 0.0);
        
        void setFirstName(const std::string&);
        std::string getFirstName() const;

        void setLasttName(const std::string&);
        std::string getLasttName() const;

        void setSocialSecurityNumber(const std::string&);
        std::string getSocialSecurityNumber() const;

        void  setGrossSales(double);
        double getGrossSales() const;

        void  setCommissionRate(double);
        double getCommissionRate() const;

        virtual double earnings() const;
        virtual std::string toString() const;
    private:
        std::string FirstName;
        std::string LastName;
        std::string socialSecurityNumber;
        double grossSales;
        double commissionRate;
};
#endif