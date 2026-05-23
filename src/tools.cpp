#include <iostream>
#include <cmath>

#include "question_user.h"

int menu() {

    std::cout<<"-------MENU------\n";
    std::cout<<"1) Multiply\n";
    std::cout<<"2) Divide\n";
    std::cout<<"3) Add\n";
    std::cout<<"4) Subtract\n";
    std::cout<<"5) Raise to power\n";
    std::cout<<"6) Extract root\n";
    std::cout<<"7) EXIT\n\n";

    std::cout<<"Option(1-7): ";
    int x {};
    std::cin>>x;
    std::cout<<"\n";


    return x;
}

double add() {
    return firstNumber() + secondNumber();
}

double substract() {
    return firstNumber() - secondNumber();
}

double multiply() {
    return firstNumber() * secondNumber();
}

double divide() {
    double x {firstNumber()};
    double y {secondNumber()};

    while(y==0) {
        std::cout<<"Error: You can not divide by zero.\n\n";
        double x {firstNumber()};
        double y {secondNumber()};

        if(y!=0)
            return x/y;
    }

    return x/y;
}

double power() {
    std::cout<<"Base number: ";
    double x {};
    std::cin>> x;

    std::cout<<"Exponent: ";
    double y {};
    std::cin>> y;

    return pow(x, y);
}

double root() {
        std::cout<<"Number: ";
        double x {};
        std::cin>> x;

        while(x<0) {
            std::cout<<"Error: The number can not be negative.\n\n";
            std::cout<<"Number: ";
            std::cin>>x;

            if(x>=0)
                break;
        }

        std::cout<<"Root degree: ";
        double y {};
        std::cin>> y;

    return pow(x, 1/y);
}


void result(double y) {
    std::cout<<"= "<< y <<"\n\n";
}
