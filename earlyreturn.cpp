#include <iostream>

int abs(int x)
{
    if (x<0)
    {
        return -x; //if the number is negative the program stops here. This is called early return.
    }
    
    return x;
}

int main()
{
    int a;
    std::cout<<"Enter a number: \n";
    std::cin>>a;
    std::cout<<abs(a)<<"\n";
    return 0;
}

