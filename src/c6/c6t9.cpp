#include <iostream>
#include <string>
#include <fstream>
const int MAX = 10;
struct Donation
{
    std::string name;
    double money;
};
int main()
{
    using namespace std;
    string filename;
    int num = 0;
    cout << "Enter the name of the file: ";
    getline(cin, filename);
    ifstream file(filename);
    if (!file)
    {
        cerr << "Error: Could not open the file " << filename << endl;
        return 1;
    }
    file >> num;
    file.get();
    struct Donation *donations = new Donation[num];
    for (int i = 0; i < num; i++)
    {
        getline(file, donations[i].name);
        file >> donations[i].money;
        file.get();
    }
    file.close();
    unsigned int grandPatronsCount = 0;
    cout << "\nGrand Patrons:" << endl;
    for (int i = 0; i < num; i++)
    {
        if (donations[i].money > 10000)
        {
            cout << donations[i].name << ": " << donations[i].money << endl;
            grandPatronsCount++;
        }
    }
    if (grandPatronsCount == 0)
    {
        cout << "none" << endl;
    }
    bool is_empty = true;
    cout << "\nPatrons:" << endl;
    for (int i = 0; i < num; i++)
    {
        if (donations[i].money <= 10000)
        {
            cout << donations[i].name << ": " << donations[i].money << endl;
            is_empty = false;
        }
    }
    if (is_empty)
    {
        cout << "none" << endl;
    }
    delete[] donations;
    system("pause");
    return 0;
}
