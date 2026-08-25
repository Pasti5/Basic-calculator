#ifndef TOOLS_H
#define TOOLS_H

int menu();

double add      (double addend1, double addend2);
double subtract (double minuend, double subtrahend);
double multiply (double factor1, double factor2);
double divide   (double dividend, double divisor);
double power    (double base, double exponent);
double root     (double radicand, double index);

void printResult(double result);

#endif // TOOLS_H
