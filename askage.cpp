#include <iostream>
#include <string>

int askage(std::string name)
{
    std::cout<<"Enter "<<name<<"'s age: ";
    int age;
    std::cin>>age;

    return age;
}

std::string askname(int person_number)
{
    std::cout<<"Enter the name of person #"<<person_number<<": ";
    std::string name;
    std::getline(std::cin>>std::ws,name);

    return name;
}

void compareages(std::string name1,int age1,std::string name2,int age2)
{
    if(age1>age2)
    {
        std::cout<<name1<<" is older than "<<name2<<"\n";
    }
    else if(age1<age2)
    {
        std::cout<<name2<<" is older than "<<name1<<"\n";
    }
    else
    {
        std::cout<<name1<<" and "<<name2<<" are of the same age\n";
    }
}



int main()
{
    std::string name1=askname(1);
    int age1=askage(name1);
    std::string name2=askname(2);
    int age2=askage(name2);
    compareages(name1,age1,name2,age2);
    
    return 0;
}