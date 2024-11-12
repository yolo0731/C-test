#include <iostream>

void time(int a, int b)
{
    using namespace std;
    cout << "Time: " << a << ":" << b << endl;
}
int main()
{
    using namespace std;
    int a, b;
    cout << "enter the number of hours:";
    cin >> a;
    cout << "enter the number of minutes:";
    cin >> b;
    time(a, b);
    system("pause");
    return 0;
}