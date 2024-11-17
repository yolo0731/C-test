#include <iostream>
int main()
{
    using namespace std;
    char ch;
    while (cin.get(ch) && ch != '@')
    {
        if (ch >= '0' && ch <= '9')
            continue;
        else if (ch >= 'a' && ch <= 'z')
        {
            cout << char(ch - 32);
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            cout << char(ch + 32);
        }
        else
        {
            cout << ch;
        }
    }
    system("pause");
    return 0;
}