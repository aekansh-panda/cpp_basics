#include <iostream>

#define printx //defined a macro named printx

int main()
{
    #ifdef printx // check if printx is defined
        std::cout << "printx is defined\n";
    #endif

    #ifdef printy // check if printy is defined
        std::cout << "printy is defined\n";
    #endif

    return 0;  // returns 0 if non of the above conditions are met
}