#include <iostream>
#include <string>
const int seasons = 4;
const char *Snames[seasons] = {"Spring", "Summer", "Fall", "Winter"};
void fill(double pa[])
{
    using namespace std;
    for (int i = 0; i < seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}
void show(double da[])
{
    using namespace std;
    double total = 0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
int main()
{
    double expenses[seasons];
    fill(expenses);
    show(expenses);
    system("pause");
    return 0;
}