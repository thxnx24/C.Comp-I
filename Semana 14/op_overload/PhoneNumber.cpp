#include <iostream>
#include <iomanip>

#include "PhoneNumber.h"

using namespace std;

ostream& operator<<(ostream& output, const PhoneNumber& number){
    output << "Area code: " << number.areaCode << "\nExchange: "
        << number.exchange << "\nLine: " << number.line << "\n"
        << "(" << number.areaCode << ") " << number.exchange << "-"
        << number.line << "\n";

    return output;
}

istream& operator>>(istream& input, PhoneNumber& number){
    input.ignore();
    input >> setw(3);
    input.ignore(2);
    input >> setw(4);
    input.ignore();
    input >> setw(4) >> number.line;

    return input;
}

int main(){
    PhoneNumber phone;
    cout << "Enter phone numerb in the form (555) 555-55555" << endl;

    cin >> phone;

    cout << "\nThe phone number entered was : \n";

    cout << phone << endl;
}