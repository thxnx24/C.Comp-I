#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "Array.h"

using namespace std;


Array::Array(int arraySize)
    : size{(arraySize > 0 ? static_cast<size_t>(arraySize) :
        throw invalid_argument{"Array size must be greater than 0"})} ,
      ptr{new int[size]{} } { }

Array::Array(const Array& arrayToCopy)
    : size{arrayToCopy.size}, ptr{new int[size]} {
        for (size_t i{0}; i < size; i++) {
            ptr[i] = arrayToCopy.ptr[i];
        }
    }

Array::~Array() {
    delete[] ptr;
}

size_t Array::getSize() const {
    return size;
} 

const Array& Array::operator=(const Array& rigth) {
    if (&rigth != this) {
        if (size != rigth.size) {
            delete [] ptr;
            size = rigth.size;
            ptr = new int[size];
        }
        for (size_t i{0}; i < size; i++) {
            ptr[i] = rigth.ptr[i];
        }
    }
    return *this;
}

bool Array::operator==(const Array& right) const {
    if (size != right.size) {
        return false;
    }

    for (size_t i{0}; i < size; i++) {
        if (ptr[i] != right.ptr[i]) {
            return false;
        }
    }
    return true;
}

int& Array::operator[](int subscript)  {
    if (subscript < 0 ||  subscript >= size) {
        throw out_of_range{"Subscript out of range"};
    }

    return ptr[subscript];
}

int Array::operator[](int subscript) const {
    if (subscript < 0 ||  subscript >= size) {
        throw out_of_range{"Subscript out of range"};
    }
    return ptr[subscript];
}
istream& operator>> (istream& input, Array& a) {
    for (size_t i{0}; i < a.size; ++i) {
        input >> a.ptr[i];
    }

    return input;
}

ostream& operator<< (ostream& output, const Array& a) {
    for (size_t i{0}; i < a.size; ++i) {
        output << a.ptr[i] << "  ";
    }

    output << endl;
    return output;
}

int main(){
    Array integers1{7};
    Array integers2;

    cout << "Size of Array integers1 is " << integers1.getSize()
        << "\nArray after initialization: " << integers1;
    
    cout << "\nSize of Array integers2 is " << integers2.getSize()
        << "\nArray after initialization: " << integers2;
    
    cout << "\nEnter 17 integers:" << endl;
    cin >> integers1 >> integers2;

    cout << "\nAfter input, the Arrays contain:\n"
        << "integers1: " << integers1
        << "integers2: " << integers2;
    
    cout << "\nEvaluating: integers1 != integers2" << endl;

    if (integers1 != integers2) {
        cout << "integers1 and integers2 are not equal" << endl;
    }

    Array integers3{integers1};

    cout << "\nSize of Array integers3 is " << integers3.getSize()
        << "\nArray after initialization: " << integers3;

    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2;

    cout << "integers1: " << integers1 <<  "integers2: " << integers2;

    cout << "\nEvaluating: integers1 == integers2" << endl;

    if (integers1 == integers2) {
        cout << "integers1 and integers2 are equal" << endl;
    }

    cout << "\nintegers1[5] is " << integers1[5];

    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1: " << integers1;

    try {
        cout << "\nAttempt to assign 1000 to integers1[15]" << endl;
        integers1[15] = 1000;
    }
    catch (out_of_range& ex) {
        cout << "An exception occurred: " << ex.what() << endl;
    }
}