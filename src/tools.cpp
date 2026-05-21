#include <iostream>
#include <cmath>

#include "question_user.h"

int menu() {
    std::cout<<"-----------------\n";
    std::cout<<"1. Multiply\n";
    std::cout<<"2. Divide\n";
    std::cout<<"3. Add\n";
    std::cout<<"4. Substract\n";
    std::cout<<"5. Power\n";
    std::cout<<"6. Exit\n";
    std::cout<<"-----------------\n\n";

    std::cout<<"Option: ";
    int x {};
    std::cin>>x;

    return x;
}

int add() {
    return firstNumber() + secondNumber();
}

int substract() {
    return firstNumber() - secondNumber();
}

int multiply() {
    return firstNumber() * secondNumber();
}

int divide() {
    return firstNumber() / secondNumber();
}

int power() {
    std::cout<<"Your number: ";
    int x;
    std::cin>> x;

    std::cout<<"To the power of: ";
    int y;
    std::cin>> y;

    return pow(x, y);
}


void result(int y) {
    std::cout<<"\n= "<< y <<"\n\n\n";
}
