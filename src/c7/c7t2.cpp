#include <iostream>
const int Max = 10;
int intput(double data[], int max_num)
{
    int i = 0;
    std::cout << "Enter numbers (-1 to quit): ";
    while (std::cin >> data[i])
    {
        if (data[i] == -1)
            break;
        i++;
        if (i == max_num)
            break;
    }
    return (i < max_num) ? i : max_num;
}
double ave(double data[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += data[i];
    }
    return sum / n;
}
void output(double data[], int n, double average)
{
    std::cout << "The score are:" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "The average is: " << average << std::endl;
}
int main()
{
    double score[Max];
    int n = intput(score, Max);
    double average = ave(score, n);
    output(score, n, average);
    system("pause");
    return 0;
}
