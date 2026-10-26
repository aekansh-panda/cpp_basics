#include <iostream>

void check(int num)
{
    if (num%2 == 0)
    {
        std::cout << num << " is even \n";
    }
    else
    {
        std::cout << num << " is odd \n";
    }
}

int main()
{
    int x;
    std::cout << "Enter a number: ";
    std::cin>>x;
    check(x);
    
    return 0;
}