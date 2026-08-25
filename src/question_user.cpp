#include <iostream>
#include <string>


double getNumberFor(std::string number_kind) 
{
        std::cout << number_kind << ": ";
            double number;
        std::cin >> number;
        return number;
}