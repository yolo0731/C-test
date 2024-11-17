#include <iostream>
const int strsize = 80;
struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference; // 0 = fullname, 1 = title, 2 = bopname
};
int main()
{
    char ch;
    using namespace std;
    struct bop bops[5] = {
        {"Wimp Macho", "Junior Programmer", "Wimp", 0},
        {"Raki Rhodes", "Senior Programmer", "Raki", 1},
        {"Celia Laiter", "Junior Programmer", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "Hoppy", 1},
        {"Pat Hand", "Analyst Trainee", "LOOPY", 0}};
    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name\tb. display by title" << endl;
    cout << "c. display by bopname\td. display by preference" << endl;
    cout << "q. quit" << endl;
    cout << "Enter your choice: ";
    while (cin >> ch && ch != 'q')
    {
        switch (ch)
        {
        case 'a':
            for (int i = 0; i < 5; i++)
            {
                cout << bops[i].fullname << endl;
            }
            break;
        case 'b':
            for (int i = 0; i < 5; i++)
            {
                cout << bops[i].title << endl;
            }
            break;
        case 'c':
            for (int i = 0; i < 5; i++)
            {
                cout << bops[i].bopname << endl;
            }
            break;
        case 'd':
            for (int i = 0; i < 5; i++)
            {
                if (bops[i].preference == 0)
                {
                    cout << bops[i].fullname << endl;
                }
                else if (bops[i].preference == 1)
                {
                    cout << bops[i].title << endl;
                }
                else
                {
                    cout << bops[i].bopname << endl;
                }
            }
        }
        cout << "Next choice: ";
    }
    cout << "Bye!" << endl;
    system("pause");
    return 0;
}