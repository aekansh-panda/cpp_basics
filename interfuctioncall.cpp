#include <iostream>

void doA()
{
    std::cout<<"In doA() function \n";
}
void doB()
{
    std::cout<<"start doB() \n";
    doA();
    std::cout<<"end doB() \n";
}
int main()
{
    std::cout<<"start main() \n";
    doB();
    std::cout<<"end main() \n";
    return 0;
}