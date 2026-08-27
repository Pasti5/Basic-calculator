#include <cmath>


bool isInteger(double number)
{
    return number == std::floor(number);
}
bool isEven(double number)
{
    return std::fmod(number, 2.0) == 0;
}