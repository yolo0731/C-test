#include <iostream>
using namespace std;
int temp(int celsius)
{
    return 1.8 * celsius + 32;
}
int main()
{
    int celsius;
    cout << "Please enter a Celsius value:";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << temp(celsius) << " degrees Fahrenheit" << endl;
    cin.get();
    cin.get();
    return 0;
}