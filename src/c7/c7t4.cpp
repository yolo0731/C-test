#include <iostream>

using namespace std;

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        result *= p / n;
    }

    return result;
}

int main()
{
    unsigned int field1 = 47;
    unsigned int field2 = 27;
    unsigned int picks1 = 5;
    unsigned int picks2 = 1;

    long double probability_field1 = probability(field1, picks1);
    long double probability_field2 = probability(field2, picks2);
    long double total_probability = probability_field1 * probability_field2;

    cout << "You have one chance in " << total_probability << " of winning the jackpot.\n";
    system("pause");
    return 0;
}
