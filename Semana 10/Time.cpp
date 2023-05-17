#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "Time.h" 
#include <iostream>
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

std::string Time::toUniversalString() const 
{
    ostringstream output;
    output << setfill('0') << setw(2) << hour << ":" 
        << setw(2) << minute << ":" << setw(2) << second;
    return output.str();
}

string Time::toStandardString() const 
{
    ostringstream output;
    output << (( hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
        << setfill('0') << setw(2) << minute << ":" << setw(2)
        << second << (hour < 12 ? " AM" : " PM");
    return output.str();
}

void displayTime(const string& message, const Time& time)
{
    cout << message << "\nUniversal time: " << time.toUniversalString()
        << "\nStandar time " << time.toStandardString() << "\n\n";

}

int main()
{
    Time t;
    
    displayTime ("Initial time", t);
    t.setTime(13, 27, 6);
    displayTime("After time", t);
    
    try
    {
        t.setTime(99, 99, 99);
    }
    catch(invalid_argument& e)
    {
        cout << "Exception " << e.what() << "\n\n";
    }
    
    displayTime("After attempting to set an invalid time", t);
}