#include <iostream>
int main()
{
    using namespace std;
    int a, b;
    int sum = 0;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int min, max;
    min = a < b ? a : b;
    max = a > b ? a : b;
    if (a == b)
        cout << "null" << endl;
    for (int i = min; i <= max; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    system("pause");
    return 0;
}