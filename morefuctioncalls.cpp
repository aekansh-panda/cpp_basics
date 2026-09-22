#include <iostream>

int add(int x, int y)
{
    //int sum=x+y;
   //return sum; or
    return x+y;
}

int multiply(int x, int y)
{
    return x*y;
}

int main()
{
    std::cout<<"Sum of 3+4 :"<<add(3,4)<<"\n";
    int a=5;
    int b=6;
    std::cout<<"sum of "<<a<<"and"<<b<<"is :"<<add(a,b)<<"\n";
    std::cout<<add(1,multiply(2,3))<<"\n"; //function call inside another function call
    std::cout<<multiply(add(1,2),add(3,4))<<"\n"; 
    std::cout<<add(2,add(5,7))<<"\n"; 
    return 0;
}
