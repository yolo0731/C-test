#include <iostream>
#include <array>
int main()
{
    using namespace std;
    array<double, 3> result;
    cout << "Enter the first number: ";
    cin >> result[0];
    cout << "Enter the second number: ";
    cin >> result[1];
    cout << "Enter the third number: ";
    cin >> result[2];
    double average = (result[0] + result[1] + result[2]) / 3;
    cout << "The all three time result are: " << result[0] << ", " << result[1] << ", " << result[2] << endl;
    cout << "The average of the three numbers is: " << average << endl;
    system("pause");
    return 0;
}