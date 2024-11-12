#include <iostream>
const int foot_inches = 12;   // 1 foot = 12 inches
const double inch_m = 0.0254; // 1 inch = 0.0254 meters
const double kg_pound = 2.2;  // 1 kg = 2.2 pounds
int main()
{
    using namespace std;
    int foot, inch, m, pound, kg;
    cout << "Enter your height in foot and inch: ";
    cin >> foot >> inch;
    inch += foot * foot_inches;
    m = inch * inch_m;
    cout << "Enter your weight in pounds: ";
    cin >> pound;
    kg = pound / kg_pound;
    double bmi = kg / (m * m);
    cout << "Your BMI is " << bmi << endl;
    system("pause");
    return 0;
}