#include <iostream>

void doprint()
{
    std::cout<<"In doprint() \n";
}

void printvalue(int a)
{
    std::cout<<a<<'\n';
}

int add(int x, int y)
{
    return x+y;
}

int main()
{
    std::cout<<"In main() \n";
    doprint();
    printvalue(5);
    int sum {add(3,4)};
    std::cout<<"Sum: "<<sum<<"\n";
}