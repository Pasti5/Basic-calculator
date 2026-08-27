#include <iostream>
#include <string>


double AskUserFor(std::string number_kind) 
{
    std::cout << number_kind << ": ";
        double number;
    std::cin >> number;
    
    return number;
}