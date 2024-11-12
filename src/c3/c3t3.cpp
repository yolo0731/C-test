#include <iostream>
int main()
{
    const int degree_minute = 60;
    const int minute_second = 60;
    using namespace std;
    double degree, minute, second;
    cout << "Enter a latitude in degrees, minutes, and seconds:\n"
         << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> minute;
    cout << "Finally, enter the seconds of arc: ";
    cin >> second;
    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = "
         << degree + minute / degree_minute + second / (degree_minute * minute_second) << " degrees" << endl;
    system("pause");
    return 0;
}