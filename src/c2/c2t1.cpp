#include <iostream>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8); // 设置输出编码为UTF-8
    SetConsoleCP(CP_UTF8);       // 设置输入编码为UTF-8
    std::string name, address;
    std::cout << "请输入您的姓名" << std::endl;
    std::cin >> name;
    std::cout << "请输入您的地址" << std::endl;
    std::cin >> address;
    std::cout << "您的姓名是：" << name << std::endl;
    std::cout << "您的地址是：" << address << std::endl;
    system("pause");
    return 0;
}