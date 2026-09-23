#include <iostream>

int check(int x)
{
    int y=3;
    std::cout<<"x and y are: "<<x<<" "<<y<<"\n";
    x=5;
    std::cout<<"x and y are: "<<x<<" "<<y<<"\n";

}

int main()
{
    int x=1;
    int y=2;
    std::cout<<"x and y are: "<<x<<" "<<y<<"\n";
    check(x);
    std::cout<<"x and y are: "<<x<<" "<<y<<"\n";
    return 0;

}
