#include <iostream>

int main()
{
    std::cout << "Enter alphabets: \n"; // enter "a b" (without quotes)
    char a;//stores all the alphabets entered by the user

    std::cin.get(a);//reads the first alphabet entered by the user and stores it in variable a
    std::cout << "You entered: " << a << "\n";//prints the first alphabet entered by the user

    std::cin.get(a);//cin.get reads the whitespace character (space) entered by the user and stores it in variable a. If u used cin instead of cin.get then it would have stored b instead of the whitespace character. 
    std::cout << "You entered: " << a << "\n";

    return 0;
}