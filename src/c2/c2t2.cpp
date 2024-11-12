#include <iostream>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8); // 设置输出编码为UTF-8
    using namespace std;
    int distance, yard;
    cout << "请输入一个举例(单位:long):";
    cin >> distance;
    yard = 220 * distance;
    cout << distance << "long等于" << yard << "码" << endl;
    system("pause");
    return 0;
}