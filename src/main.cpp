#include <iostream>

#include "tools.h"

int main()
{
    std::cout<<"Welcome in the basic calculator!\n";
    while(true) {
        switch ( menu() ) {

        case 1:
            result( multiply() );
            break;
        case 2:
            result( divide() );
            break;
        case 3:
            result( add() );
            break;
        case 4:
            result( substract() );
            break;
        case 5:
            result( power() );
            break;
        case 6:
            exit(0);

        default:
            break;
        }
    }

    return 0;
}
