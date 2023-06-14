#include <iostream>
#include "CommissionEmployee.h"
#include "BasePlussCommissionEmployee.h"
#include <vector>
using namespace std;

int main(){
    
    CommissionEmployee e1("Alex",95.6,0.3);
    BasePlussCommissionEmployee bp("Silvia",1000,0.5,2000);

    CommissionEmployee *ptr1 = new CommissionEmployee("Juan",800,0.1);
    BasePlussCommissionEmployee *ptr2 = new BasePlussCommissionEmployee("Marco",500,0.5,2000);

    vector <CommissionEmployee*> vec;
    vec.push_back(& e1);
    vec.push_back(& bp);
    vec.push_back(ptr1);
    vec.push_back(ptr2);

    delete ptr1;
    delete ptr2;

    for (CommissionEmployee*p:vec){
        cout << p->toString() << endl;
    }
}