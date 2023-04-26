#include <iostream>


int main() 
{
    int b[]{10, 20, 30, 40}; // create 4-element built-in array b
    int* bPtr{b}; // set bPtr to point to built-in array b

    // output built-in array b using array subscript notation
    std::cout << "Array b displayed with:\n\nArray subscript notation\n";

    for (size_t i{0}; i < 4; ++i) 
    {
        std::cout << "b[" << i << "] = " << b[i] << '\n';
    }

    // output built-in array b using array name and pointer/offset notation
    std::cout << "\nPointer/offset notation where "
    << "the pointer is the array name\n";

    for (size_t offset1{0}; offset1 < 4; ++offset1) 
    {
        std::cout << "*(b + " << offset1 << ") = " << *(b + offset1) << '\n';
    }

    // output built-in array b using bPtr and array subscript notation
    std::cout << "\nPointer subscript notation\n";

    for (size_t j{0}; j < 4; ++j) 
    {
        std::cout << "bPtr[" << j << "] = " << bPtr[j] << '\n';
    }

    std::cout << "\nPointer/offset notation\n";

    // output built-in array b using bPtr and pointer/offset notation
    for (size_t offset2{0}; offset2 < 4; ++offset2) 
    {
        std::cout << "*(bPtr + " << offset2 << ") = "
        << *(bPtr + offset2) << '\n';
    }
} 