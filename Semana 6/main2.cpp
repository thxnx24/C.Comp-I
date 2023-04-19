#include <iostream>
#include <iomanip>
#include <array>

int main()
{
    std::array <int,5> n{32,27,64,18,95};

    std::cout << "Element" << std::setw(10) << "value" << std::endl;

    for (size_t i{0}; i < n.size(); ++i)
    {
        std::cout << std::setw(7) << i << std::setw(10) <<n[i] << std::endl;
    }
}