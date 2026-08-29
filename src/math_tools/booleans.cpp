#include <cmath>


bool isInteger(double number)
{
    return number == std::floor(number);
}

bool isEven(double number)
{
    return std::fmod(number, 2.0) == 0.0;
}

bool isRootIllegal(double radicand, double index)
{
    return  radicand < 0.0 && (isInteger(index) == false || isEven(index) == true);
}