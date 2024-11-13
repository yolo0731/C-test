#include <iostream>
int main()
{
    using namespace std;
    int num;
    cout << "Enter number of rows:";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << ".";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}