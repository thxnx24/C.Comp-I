#ifndef LUCA_H
#define LUCA_H

#include <iostream>

class Luca{
    private:
        int sol;
        int cents;
    public:
        Luca(int s, int c): sol(s),cents(c){}

        void print() const{
            std::cout << "S/. " << sol << "." <<cents << std::endl;
        }
        friend Luca operator+(const Luca o, const Luca p);
        friend std::ostream& operator << (ostream &output, const Luca &p);
};
Luca operator+(const Luca o, const Luca p){
    Luca tmp(0,0);
    tmp.cents = p.cents + o.cents;
    tmp.sol = p.sol + o.sol;
    if (tmp.cents >= 100){
        tmp.sol += 1;
        tmp.cents -= 100;
    }
    return tmp;
}
std::ostream& operator << (std::ostream &output, const Luca &o){
    output << "S/. " << o.sol << "." << o.cents;
    return output;
}
#endif