#include <iostream>
int main()
{
    using namespace std;
    double mile, gallon;
    cout << "Enter the distance in miles: ";
    cin >> mile;
    cout << "Enter the comsumption in gallons: ";
    cin >> gallon;
    double mile_per_gallon = mile / gallon;
    cout << "The average fuel consumption is " << 100 / mile_per_gallon << " L/100km " << endl;
}