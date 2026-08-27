#include <iostream>


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