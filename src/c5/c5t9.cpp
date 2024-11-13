#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string word;
    int count = 0;
    while (1)
    {
        cout << "Enter words (to stop, type the word done): ";
        cin >> word;
        if (word == "done")
        {
            break;
        }
        count++;
    }
    cout << "You entered a total of " << count << " words." << endl;
    system("pause");
    return 0;
}