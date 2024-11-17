#include <iostream>
double ave(double a, double b)
{
    return 2.0 * a * b / (a + b);
}
int main()
{
    double x, y;
    do
    {
        std::cout << "Enter two numbers: ";
        std::cin >> x >> y;
        if (x != 0 && y != 0)
        {
            std::cout << "Harmonic mean: " << ave(x, y) << std::endl;
        }
        else
            break;
    } while (1);
    system("pause");
    return 0;
}