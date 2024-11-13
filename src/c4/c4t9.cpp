#include <iostream>
#include <string>
struct CandyBar
{
    std::string brand;
    double weight;
    int calories;
};
int main()
{
    using namespace std;
    CandyBar *P1 = new CandyBar[3]{
        {"Mocha Munch", 2.3, 350},
        {"Big Rabbit", 5, 300},
        {"Joy Boy", 4.1, 430},
    };
    cout << "Brand: " << P1[0].brand << "\n"
         << "Weight: " << P1[0].weight << "\n"
         << "Calories: " << P1[0].calories << endl;
    delete[] P1;
    system("pause");
    return 0;
}