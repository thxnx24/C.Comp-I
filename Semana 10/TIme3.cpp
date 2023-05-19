#include <stdexcept>
#include <iostream>
#include "Time3.h"


using namespace std;

void Time::setTime(int h, int m, int s)
{
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
    {
        hour = h;
        minute = m;
        second = s;
    }
    else
    {
        throw invalid_argument("hour, minute and/or second was out of range");
    }
}

unsigned int Time::getHour() const {return hour;}

unsigned int& Time::batSetHour(int hh) 
{
    if (hh >= 0 && hh < 24) 
    {
        hour = hh;
    }
    else 
    {
        throw invalid_argument("hour must be 0-23");
    } 
    return hour;
}

int main() 
{
    Time t;

    cout << "\nInvalid hour after modification: " << t.getHour();
    cout << "\n\n*************************************************\n"
        << "POOR PROGRAMMING PRACTICE!!!!!!!!\n"
        << "t.badSetHour(12) as an lvalue, invalid hour: "
        << t.getHour()
        << "\n*************************************************" << endl;
}
