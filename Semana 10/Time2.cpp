#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <string>
#include "Time2.h"

using namespace std;

Time::Time(int hour, int minute, int second)
{
    setTime(hour, minute, second);
}

void Time::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h)
{
    if (h >= 0 && h < 24)
    {
        hour = h;
    }
    else
    {
        throw invalid_argument("minute must be 0-23");
    }
}

void Time::setMinute(int m)
{
    if (m >= 0 && m < 60)
    {
        minute  = m;
    }
    else
    {
        throw invalid_argument("minute must  be 0 - 59");
    }
}

void Time::setSecond(int s)
{
    if (s >= 0 && s < 60)
    {
        second = s;
    }
    else
    {
        throw invalid_argument("seconde must be 0 - 59");
    }
}

unsigned int Time::getHour() const{return hour;}
unsigned int Time::getMinute() const{return minute;}
unsigned int Time::getSecond() const{return second;}

string Time::toUniversalString() const
{
    ostringstream output;
    output << setfill('0') << setw('2') << getHour() << ":"
        << setw(2) << getMinute() << ":" << setw(2) << getSecond();
    return output.str();
}

string Time::toStandardString() const 
{
    ostringstream output;
    output << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
        << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
        << getSecond() << (hour < 12 ? " AM" : " PM");
    return output.str();
} 

void displayTime (const string& message, const Time& time)
{
    cout << message << "\nUniversal time: " << time.toUniversalString()
        << "\nStandard time: " << time.toStandardString() << "\n\n";
}


int main()
{
    Time t1;
    Time t2{2};
    Time t3{21, 34};
    Time t4{12,25,42};

    cout << "Constructed with: \n\n";
    displayTime("t1: all arguments defaulted", t1);
    displayTime("t2: hour specified; minute and second defaulted", t2);
    displayTime("t3: hour and minute specified; second defaulted", t3);
    displayTime("t4: hour, minute and second specified", t4);

    try 
    {
         Time t5{27,74,49};
    }
    catch(invalid_argument& e)
    {
        cerr << "Exception while initializing t5: " << e.what() << endl;
    }


}