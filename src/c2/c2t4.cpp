#include <iostream>
int main()
{
    using namespace std;
    int age, month;
    cout << "enter your age :";
    cin >> age;
    month = age * 12;
    cout << "your age is " << month << " months" << endl;
    cin.ignore();
    cin.get();
    return 0;
}