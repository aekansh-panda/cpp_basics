#include <iostream>

namespace test1
{
    void print()
    {
        std::cout <<"this is test1 namespace\n";
    }
}

namespace test2
{
    void print()
    {
        std::cout<<"this is test2 namespace\n";
    }
}

int main()
{
    test1::print();
    test2::print();

    return 0;
}