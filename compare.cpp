#include <iostream>

bool IfEqual(int x,int y)
{
    return (x==y);
}

int main()
{
    int a,b;
    std::cout<<"Enter two numbers: \n";
    std::cin>>a>>b;
    if(IfEqual(a,b))
    {
        std::cout<<"The numbers are equal.\n";
    }
    else
    {
        std::cout<<"The numbers are not equal.\n";
    }
    return 0;
}