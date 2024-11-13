#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string month[12] = {
        "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"};
    int sales[12];
    int total = 0;
    int i;
    for (i = 0; i < 12; i++)
    {
        cout << "Enter the sales for " << month[i] << ": ";
        cin >> sales[i];
        total += sales[i];
    }
    cout << "The total sales for the year is " << total << endl;
    system("pause");
    return 0;
}