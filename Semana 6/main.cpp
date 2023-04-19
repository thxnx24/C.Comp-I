#include <iostream>
#include <iomanip>
#include <array>

int main()
{
    std::array <int,5> n;

    for (size_t i{0}; i < n.size(); ++i)
    {    
        n[i] = 0;
    }
    std::cout << "Element" << std::setw(10) << "Value" << std::endl;

    for (size_t j{0}; j < n.size(); ++j)
    {
        std::cout << std::setw(7) << j << std::setw(10) <<n[j] << std::endl;
    }


}