#include <iostream>

int main()
{
    using namespace std;

    double km, l, l_per_100km, km_per_l, mpg;
    const double mile_per_100km = 62.14;
    const double liters_per_gallon = 3.875;

    cout << "Enter the distance in kilometers: ";
    cin >> km;

    cout << "Enter the consumption in liters: ";
    cin >> l;

    // 计算每 100 公里的油耗（升/100公里）
    l_per_100km = (l / km) * 100;

    cout << "The average fuel consumption is " << l_per_100km << " L/100km " << endl;

    // 将油耗转换为美国风格的油耗（英里/加仑）
    mpg = mile_per_100km / (l_per_100km / liters_per_gallon);

    cout << "The average fuel consumption is " << mpg << " mpg " << endl;

    system("pause");
    return 0;
}
