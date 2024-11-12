#include <iostream>
int main()
{
    using namespace std;
    long world_pop;
    long us_pop;
    double percentage;
    cout << "Enter the world's population: ";
    cin >> world_pop;
    cout << "Enter the population of the US: ";
    cin >> us_pop;
    percentage = double(us_pop) / world_pop * 100;
    cout << "The population of the US is " << percentage << "% of the world population." << endl;
    system("pause");
    return 0;
}