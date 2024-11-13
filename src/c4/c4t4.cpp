#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string first_name, last_name, final_name;
    first_name = "Flip";
    last_name = "Fleming";
    final_name = last_name + ", " + first_name;
    cout << "Here's the information in a single string: " << final_name << endl;
    system("pause");
    return 0;
}