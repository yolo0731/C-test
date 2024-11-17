#include <iostream>
#include <array>
using namespace std;

int comparison(int a, int count, const array<double, 10> &arr)
{
    int num = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > a)
        {
            num++;
        }
    }
    return num;
}

int main()
{
    array<double, 10> arr = {0};
    int count = 0;
    double total = 0;
    char ch;

    // Read up to 10 numbers from input
    while (cin >> ch && ch >= '0' && ch <= '9' && count < 10)
    {
        arr[count] = ch - '0';
        total += arr[count];
        count++;
    }

    // Calculate average
    double average = (count > 0) ? (total / count) : 0;
    cout << "Average: " << average << endl;

    // Output comparison result
    cout << "Number of elements greater than average: " << comparison(average, count, arr) << endl;
    system("pause");
    return 0;
}
