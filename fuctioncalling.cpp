#include <iostream>

void doB()
{
    std::cout<<"In doB() function \n";
}

int main()
{
    std::cout<<"starting main() function \n";   
    doB();
    std::cout<<"ending main() function \n";

    return 0;
}
