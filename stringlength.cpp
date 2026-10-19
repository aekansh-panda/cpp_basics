#include <iostream>
#include <string>

int main()
{
    std::cout<<"Enter your full name: ";
    std::string name;
    std::getline(std::cin>>std::ws,name);
    std::cout<<"Enter your age: ";
    int age;
    std::cin>>age;
    int length=name.length();
    std::cout<<"Hello "<<name<<", age + length of your name is: "<<age+length<<"\n";

    return 0;
}