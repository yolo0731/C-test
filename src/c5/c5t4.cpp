#include <iostream>
int main()
{
    using namespace std;

    double da_ivt = 100.0;
    double cleo_ivt = 100.0;
    double da_rate = 0.1;
    double cleo_rate = 0.05;
    int years = 0;
    double da_profit = da_ivt * da_rate;
    while (cleo_ivt <= da_ivt)
    {
        da_ivt += da_profit;
        cleo_ivt += cleo_ivt * cleo_rate;
        years++;
    }
    cout << "Cleo's investment will exceed Da's investment in " << years
         << " years." << endl;
    cout << "Da's investment: " << da_ivt << endl;
    cout << "Cleo's investment: " << cleo_ivt << endl;
    system("pause");
    return 0;
}