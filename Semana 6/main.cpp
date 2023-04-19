#include <iostream>
#include <iomanip>
#include <array>

int main()
{
    array<int, 5> n;

    for (size_t i{0}; i < n.size(); ++i)
    {    
        n[i] = 0;
    }
    std::cout << "Element" << setw(10) << "Value" << std::endl;

    for (size_t j{0}; j < n.size(); ++j)
    {
        std::cout << setw(7) << j << setw(10) <<n[j] << std::endl;
    }


}