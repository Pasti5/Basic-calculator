#include <iostream>
#include <cmath>

#include "question_user.h"

int menu() 
{
    std::cout << "-------MENU------\n";
    std::cout << "1) Multiply\n";
    std::cout << "2) Divide\n";
    std::cout << "3) Add\n";
    std::cout << "4) Subtract\n";
    std::cout << "5) Raise to power\n";
    std::cout << "6) Extract root\n";
    std::cout << "7) EXIT\n\n";

    std::cout << "Option(1-7): ";
    int option {};
    std::cin >> option;
    std::cout << "\n";

    return option;
}

double add(double addend1, double addend2) 
{
    return addend1 + addend2;
}

double subtract(double minuend, double subtrahend) 
{
    return minuend - subtrahend;
}

double multiply(double factor1, double factor2) 
{
    return factor1 * factor2;
}

double divide(double dividend, double divisor) 
{
    while(divisor == 0) 
    {
        std::cout << "Error: You can not divide by zero.\n\n";
        double new_dividend {getNumberFor("Dividend")};
        double new_divisor {getNumberFor("Divisor")};

        if(new_divisor != 0)
        return new_dividend / new_divisor;
    }

    return dividend/divisor;
}

double power(double base, double exponent) 
{
    return pow(base, exponent);
}

double root(double radicand, double index)
{
        while(radicand < 0) 
        {
            std::cout << "Error: Radicand can not be negative.\n\n";
            double new_radicand {getNumberFor("Radicand")};
            double new_index {getNumberFor("Index")};

            if(new_radicand >= 0)
            return pow(new_radicand, 1/new_index);
        }

    return pow(radicand, 1/index);
}


void printResult(double result) 
{
    std::cout << "= " << result << "\n\n";
}
