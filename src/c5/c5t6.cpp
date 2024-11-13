#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string month[12] = {
        "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"};
    int sales[3][12];
    int total[3] = {0, 0, 0};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 12; j++)
        {
            cout << "Enter the sales for " << month[j] << " in year " << i + 1 << ": ";
            cin >> sales[i][j];
            total[i] += sales[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        cout << "The total sales for year " << i + 1 << " is " << total[i] << endl;
    }
    cout << "The total sales for the three years is " << total[0] + total[1] + total[2] << endl;
    system("pause");
    return 0;
}