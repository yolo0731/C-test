#include "my_class.h"
#include <iostream>
int main()
{
    MyClass myClass;
    myClass.greet();
    std::cout << "Press Enter to continue...";
    std::cin.get();
    return 0;
}