#include <iostream>
using namespace std;
double add(double a, double b)
{
    return a + b;
}
double subtract(double a, double b)
{
    return a - b;
}
double multiply(double a, double b)
{
    return a * b;
}
double calculate(double a, double b, double (*pf)(double, double))
{
    return pf(a, b);
}
int main()
{
    double (*pf[3])(double, double) = {add, subtract, multiply};
    double a, b;
    cout << "Enter two numbers: ";
    while (cin >> a >> b)
    {
        for (int i = 0; i < 3; i++)
        {
            double result = calculate(a, b, pf[i]);
            cout << "Result of operation " << i + 1 << ": " << result << endl;
        }
        cout << "Enter two numbers (or non-numeric to quit): ";
    }
    cout << "Done.\n";
    system("pause");
    return 0;
}