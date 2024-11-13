#include <iostream>
int main()
{
    using namespace std;
    char first_name[20], last_name[20];
    char grade_letter;
    int age;
    cout << "What is your first name? ";
    cin.getline(first_name, 20);
    cout << "What is your last name? ";
    cin.getline(last_name, 20);
    cout << "What letter grade do you deserve? ";
    cin >> grade_letter;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char(grade_letter + 1) << endl;
    cout << "Age: " << age << endl;
    system("pause");
    return 0;
}
