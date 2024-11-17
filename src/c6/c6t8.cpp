#include <iostream>
#include <fstream>
int main()
{
    using namespace std;
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;
    ifstream file(filename);
    if (!file)
    {
        cout << "Could not open the file " << filename << endl;
        return 1;
    }
    char ch;
    int charCount = 0;
    while (file.get(ch)) // 读取文件中的字符
    {
        charCount++;
    }
    cout << "The file contains" << charCount << " characters." << endl;
    file.close();
    system("pause");
    return 0;
}