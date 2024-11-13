#include <iostream>
struct car
{
    std::string make;
    int year;
};
int main()
{
    using namespace std;
    cout << "How many cars do you wish to catalog? ";
    int n;
    cin >> n;
    struct car *cars = new struct car[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Car #" << i + 1 << ":" << endl;
        cout << "Please enter the make: ";
        cin >> cars[i].make;
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
    }
    cout << "Here is your collection:" << endl;
    cout << cars[0].year << " " << cars[0].make << endl;
    cout << cars[1].year << " " << cars[1].make << endl;
    delete[] cars;
    system("pause");
    return 0;
}