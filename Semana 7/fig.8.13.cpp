#include <iostream>
size_t getSize(double*);

int main()
{
    double numbers[20];

    std::cout << "The number of bytes in the array is " << sizeof(numbers);
    std::cout << "\nThe numbers of bytes returned by getSize is " << getSize(numbers) << std::endl;
    return 0;
}

size_t getSize(double* ptr)
{
    return sizeof(ptr);
}