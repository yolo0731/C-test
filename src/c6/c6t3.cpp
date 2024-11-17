#include <iostream>

int main()
{
    using namespace std;

    cout << "Please enter one of the following choices: \n";
    cout << "c) carnivore\tp) pianist.\n"
         << "t) tree\t\tg) game" << endl;

    char ch;
    bool validInput = false;

    while (!validInput)
    {
        cin >> ch;
        switch (ch)
        {
        case 'c':
            cout << "A maple is a carnivore." << endl;
            validInput = true;
            break;
        case 'p':
            cout << "A maple is a pianist." << endl;
            validInput = true;
            break;
        case 't':
            cout << "A maple is a tree." << endl;
            validInput = true;
            break;
        case 'g':
            cout << "A maple is a game." << endl;
            validInput = true;
            break;
        default:
            cout << "Please enter a c, p, t, or g: ";
            break;
        }
    }
    system("pause");
    return 0;
}
