#include <string>
#include <iostream>

int main()
{
    std::cout<<"Enter your name: ";
    std::string name;
    std::getline(std::cin>>std::ws,name);//std::getline is used to read whole line of input including spaces, std::ws is used to ignore leading whitespace characters
    std::cout<<"Enter age: ";
    int age;
    std::cin>>age;
    std::cout<<"Hello "<<name<<", you are "<<age<<" years old. \n";
}