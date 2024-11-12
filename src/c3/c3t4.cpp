#include <iostream>
int main()
{
    using namespace std;
    long seconds, day, hour, minute, second2;
    const int day_hour = 24;
    const int hour_minute = 60;
    const int minute_second = 60;
    const int day_second = day_hour * hour_minute * minute_second;
    const int hour_second = hour_minute * minute_second;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    day = seconds / day_second;
    hour = (seconds % day_second) / hour_second;
    minute = (seconds % hour_second) / minute_second;
    second2 = seconds % minute_second;
    cout << seconds << " seconds = ";
    cout << day << " days, ";
    cout << hour << " hours, ";
    cout << minute << " minutes, ";
    cout << second2 << " seconds" << endl;
    system("pause");
    return 0;
}