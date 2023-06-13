#include <iostream>
#include "luca.h"

using namespace std;

int main(){
    Luca china(0,50);
    Luca luca(1,0);

    Luca lucachina = china + luca;

    cout <<lucachina;
    
    return 0;
}
