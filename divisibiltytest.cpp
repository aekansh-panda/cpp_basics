#include <iostream>

int asknumber(int position)
{
    std::cout<<"Enter number #"<<position<<": ";
    int number;
    std::cin>>number;

    return number;
}

void divisibilitytest(int number1,int number2)
{
    if((number1%number2)==0)
    {
        std::cout<<number1<<" is divisible by "<<number2<<"\n";
    }
    else
    {
        std::cout<<number1<<" is not divisible by "<<number2<<"\n";
        std::cout<<"Remainder is: "<<number1%number2<<"\n";
    }
}

int main()
{
    int number1=asknumber(1);
    int number2=asknumber(2);
    divisibilitytest(number1,number2);
    return 0;
}