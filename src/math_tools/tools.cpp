/*! \file tools.cpp
    \brief A file that has most of the tools

    Except the options for calculations, this file also has menu() and printResult().
*/


#include <iostream>
#include <cmath>

#include "question_user.h"
#include "booleans.h"


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

/**
 * If the radicand is smaller than zero and:
 * - the index isn't integer number
 * - OR the index is integer number and even
 * 
 *  then the while loop argument will be "true".
 */
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

