#include <iostream>
#include <string>
using namespace std;
int Fill_array(double arr[], int size)
{
    int i = 0;
    cout << "Enter numbers (q to quit): ";
    while (i < size && cin >> arr[i])
    {
        i++;
    }
    return i;
}
void Show_array(double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Reverse_array(double arr[], int size)
{
    for (int i = 1; i < size / 2; i++)
    {
        double temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
int main()
{
    const int size = 6;
    double arr[size];
    int n = Fill_array(arr, size);
    Show_array(arr, n);
    Reverse_array(arr, n);
    Show_array(arr, n);
    system("pause");
    return 0;
}