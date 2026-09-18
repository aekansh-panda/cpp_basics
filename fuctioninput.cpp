#include <iostream>

int fuctioninput()//the type of fuction cant be void because we are returning a value from the function.
{
    int a{};
    std::cout<<"Enter a number: \n";
    std::cin>>a;
    return a;
    //if u dont add a return statement in a function that is supposed to return a value, it will lead to undefined behavior. 
    //The function may return a garbage value or cause a runtime error.
    //If you type return 0; the fuction will always return 0, regardless of the input provided by the user.
}

int main()
{
    std::cout<<"fuctioncall1 \n";
    int x {fuctioninput()};
    std::cout<<"You entered: "<<x<<"\n";
    std::cout<<"fuctioncall2 \n";
    int y {fuctioninput()};
    std::cout<<"You entered: "<<y<<"\n";
}