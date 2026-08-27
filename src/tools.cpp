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
    while(divisor == 0.0) 
    {
        std::cout << "Error: You can not divide by zero.\n\n";
        double new_dividend {AskUserFor("Dividend")};
        double new_divisor {AskUserFor("Divisor")};

        if(new_divisor != 0.0)
            return new_dividend / new_divisor;
    }
    return dividend/divisor;
}

double power(double base, double exponent) 
{
    return pow(base, exponent);
}




bool isInteger(double number)
{
    return number == std::floor(number);
}
bool isEven(double number)
{
    return std::fmod(number, 2.0) == 0;
}


double root(double radicand, double index)
{
    while(radicand < 0.0 && (isInteger(index) == false || (isInteger(index) == true && isEven(index) == true) )) 
    {
        std::cout << "Error: Try a different radicand or index.\n\n";
        double new_radicand {AskUserFor("Radicand")};
        double new_index {AskUserFor("Index")};

        if(new_radicand >= 0.0)
            return pow(new_radicand, 1.0/new_index);
    }
    return pow(radicand, 1.0/index);
}


void printResult(double result) 
{
    std::cout << "= " << result << "\n\n";
}
