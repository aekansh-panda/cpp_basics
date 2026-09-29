#include <iostream>

int readNumber()
{
    int x;
    std::cout<<"Enter a number: \n";
    std::cin>>x;
    return x;
}

void writeNumber(int x)
{
    std::cout<<"The entered number is: "<<x<<"\n";
}

int main()
{
    int a=readNumber();
    writeNumber(a);
    return 0;
}