#include <iostream>

bool IfEqual(int x,int y) //the return type has to be bool to return the value as true and false if it was int then it would return 1 and 0
{
    return (x==y);
}

int main()
{
    int a,b;
    std::cout<<"Enter two numbers: \n ";
    std::cin>>a>>b;
    std::cout<<std::boolalpha; // This allows the output to be in 'true' or 'false' format
    std::cout<<"The two numbers are equal: "<<IfEqual(a,b)<<"\n";
    return 0; 

}