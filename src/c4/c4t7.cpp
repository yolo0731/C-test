#include <iostream>
#include <string>
using namespace std;
struct Pizza
{
    string name;
    double diameter;
    double weight;
};
int main()
{
    Pizza pizza;
    cout << "Enter the name of the pizza company: ";
    getline(cin, pizza.name);
    cout << "Enter the diameter of the pizza: ";
    cin >> pizza.diameter;
    cout << "Enter the weight of the pizza: ";
    cin >> pizza.weight;
    cout << "The name of the pizza company: " << pizza.name << endl;
    cout << "The diameter of the pizza: " << pizza.diameter << endl;
    cout << "The weight of the pizza: " << pizza.weight << endl;
    cin.ignore();
    cin.get();
    return 0;
}