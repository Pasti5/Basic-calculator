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
            double first_number {AskUserFor("First factor")};
            double second_number {AskUserFor("Second factor")};
            printResult(multiply(first_number, second_number));
            }
            break;
        case 2:
            {
            double first_number {AskUserFor("Dividend")};
            double second_number {AskUserFor("Divisor")};
            printResult(divide(first_number, second_number));
            }
            break;
        case 3:
            {
            double first_number {AskUserFor("First addend")};
            double second_number {AskUserFor("Second addend")};
            printResult(add(first_number, second_number));
            }
            break;
        case 4:
            {
            double first_number {AskUserFor("Minuend")};
            double second_number {AskUserFor("Subtrahend")};
            printResult(subtract(first_number, second_number));
            }
            break;
        case 5:
            {
            double base {AskUserFor("Base")};
            double exponent {AskUserFor("Exponent")};
            printResult(power(base, exponent));
            }
            break;
        case 6:
            {
            double radicand {AskUserFor("Radicand")};
            double index {AskUserFor("Index")};
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
