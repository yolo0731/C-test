#include <iostream>
#include <limits>
using namespace std;

long factorial_iterative(int n)
{
    long result = 1;
    for (int i = 2; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    using namespace std;

    int n;
    cout << "Enter an integer number: ";
    while (!(cin >> n))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter an integer number: ";
    }

    if (n < 0)
    {
        cout << "Negative numbers don't have factorial." << endl;
        return 1;
    }

    long f = factorial_iterative(n);
    cout << "The factorial of " << n << " is " << f << endl;
    return 0;
}
