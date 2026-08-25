#include <iostream>

#include "tools.h"
#include "question_user.h"

int main()
{
    std::cout<<"\nWelcome to the basic calculator!\n";
    while(true) {
        switch (menu()) 
        {
        case 1:
            {
            double first_number {getNumberFor("First factor")};
            double second_number {getNumberFor("Second factor")};
            printResult(multiply(first_number, second_number));
            }
            break;
        case 2:
            {
            double first_number {getNumberFor("Dividend")};
            double second_number {getNumberFor("Divisor")};
            printResult(divide(first_number, second_number));
            }
            break;
        case 3:
            {
            double first_number {getNumberFor("First addend")};
            double second_number {getNumberFor("Second addend")};
            printResult(add(first_number, second_number));
            }
            break;
        case 4:
            {
            double first_number {getNumberFor("Minuend")};
            double second_number {getNumberFor("Subtrahend")};
            printResult(subtract(first_number, second_number));
            }
            break;
        case 5:
            {
            double base {getNumberFor("Base")};
            double exponent {getNumberFor("Exponent")};
            printResult(power(base, exponent));
            }
            break;
        case 6:
            {
            double radicand {getNumberFor("Radicand")};
            double index {getNumberFor("Index")};
            printResult(root(radicand, index));
            }
            break;
        case 7:
            return 0;
        default:
            break;
        }
    }

    return 0;
}
