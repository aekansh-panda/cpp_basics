#include <iostream>

int main()
{
    bool b{};
    std::cout<<"Enter a boolean value : \n";
    std::cin>>std::boolalpha;// This allows the user to input 'true' or 'false' for boolean values
    std::cin>>b;
    // Allow the user to input 'true' or 'false' for boolean values
	// This is case-sensitive, so True or TRUE will not work
    std::cout<<std::boolalpha; // This allows the output to be in 'true' or 'false' format
    std::cout<<"The entered boolean value is: "<<b<<"\n";
    return 0;
}