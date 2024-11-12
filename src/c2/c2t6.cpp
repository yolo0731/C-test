#include <iostream>

double unit(double year)
{
    return 63240 * year;
}
int main()
{
    using namespace std;
    double year;
    cout << "Enter the number of light years:";
    cin >> year;
    cout << year << "light years = " << unit(year) << "astronomical units" << endl;
    cin.ignore();
    cin.get();
    return 0;
}