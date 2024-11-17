#include <iostream>
#include <string>
const int MAX = 10;
struct Donation
{
    std::string name;
    double money;
};
int main()
{
    using namespace std;
    struct Donation *donations = new struct Donation[10];
    int count = 0;
    while (count < MAX)
    {
        cout << "Enter the name of the donor: ";
        getline(cin, donations[count].name);
        if (donations[count].name == "quit")
        {
            break;
        }
        cout << "Enter the amount of donation: ";
        cin >> donations[count].money;
        cin.get();
        count++;
    }
    Donation *grandPatrons = new Donation[count];
    Donation *patrons = new Donation[count];
    int grandPatronsCount = 0;
    int patronsCount = 0;
    cout << "Grand Patrons:" << endl;
    for (int i = 0; i < count; i++)
    {
        if (donations[i].money > 10000)
        {
            grandPatrons[grandPatronsCount] = donations[i];
            cout << grandPatrons[grandPatronsCount].name << ": " << grandPatrons[grandPatronsCount].money << endl;
            grandPatronsCount++;
        }
        else
        {
            patrons[patronsCount] = donations[i];
            patronsCount++;
        }
    }
    cout << "Patrons:" << endl;
    for (int i = 0; i < patronsCount; i++)
    {
        if (patronsCount == 0)
        {
            cout << "none" << endl;
            break;
        }
        else
        {
            cout << patrons[i].name << ": " << patrons[i].money << endl;
        }
    }
    delete[] donations;
    delete[] grandPatrons;
    delete[] patrons;
    system("pause");
    return 0;
}