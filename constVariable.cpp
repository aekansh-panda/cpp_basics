#include <iostream>

bool iflegalage(int a,int b)
{
    return (a>=b);
}

int main()
{
    std::cout<<"Enter your age: ";
    int age;
    std::cin>>age;

    const int legalage = 18; //the variable legalage is declared as a constant variable the value for this variable is constant through out the program 

    if(iflegalage(age,legalage))
    {
        std::cout<<"You are eligible to vote.\n";
    }
    else
    {
        std::cout<<"You are not eligible to vote.\n";
    }

}