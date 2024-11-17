#include <iostream>
#include <limits>
using namespace std;

// 税率常量
const double tax1 = 0.1;
const double tax2 = 0.15;
const double tax3 = 0.2;

// 计算税金的函数
double tax(double income)
{
    if (income <= 5000)
    {
        return 0;
    }
    else if (income <= 15000)
    {
        return (income - 5000) * tax1;
    }
    else if (income <= 35000)
    {
        return (10000 * tax1) + (income - 15000) * tax2;
    }
    else
    {
        return (10000 * tax1) + (20000 * tax2) + (income - 35000) * tax3;
    }
}

int main()
{
    double income;
    cout << "Enter your income: ";

    while (true)
    {
        cin >> income;

        // 检查输入是否有效
        if (cin.fail())
        {
            // 输入无效，进入错误状态
            cin.clear();                                         // 清除错误状态
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 丢弃错误输入
            cout << "Invalid input. Please enter a valid numeric value: ";
            continue;
        }

        // 输入有效时，计算税金
        if (income >= 0)
        {
            cout << "Tax: " << tax(income) << endl;
            cout << "Enter your income: ";
        }
        else
        {
            cout << "Invalid input. Please enter a positive number: ";
        }
    }

    return 0;
}
