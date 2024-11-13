#include <iostream>
#include <array>
const int arr_size = 100;
int main()
{
    using namespace std;
    array<long double, arr_size> factorials;
    factorials[0] = 1;
    int i;
    for (i = 1; i < arr_size; i++)
    {
        factorials[i] = factorials[i - 1] * (i + 1);
    }
    cout << "100! = " << factorials[arr_size - 1] << endl;
    system("pause");
    return 0;
}