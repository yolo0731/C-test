#include <iostream>
#include <cstring>
const int MAX = 100;
int main()
{

    using namespace std;
    char word[MAX];
    int count = 0;
    while (1)
    {
        cout << "Enter words (to stop, type the word done): ";
        cin >> word;
        if (strcmp(word, "done") == 0)
        {
            break;
        }
        count++;
    }
    cout << "You entered a total of " << count << " words." << endl;
    system("pause");
    return 0;
}