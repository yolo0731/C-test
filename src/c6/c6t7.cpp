#include <iostream>
#include <cctype> // 用于isalpha
#include <string>

using namespace std;

int main()
{
    string word;
    int vowelCount = 0;     // 以元音打头的单词数
    int consonantCount = 0; // 以辅音打头的单词数
    int otherCount = 0;     // 其他类型的单词数

    while (true)
    {
        cout << "Enter a word (or 'q' to quit): ";
        cin >> word;

        // 如果输入是 'q'，退出循环
        if (word == "q")
        {
            break;
        }

        // 检查第一个字符是否是字母
        if (isalpha(word[0]))
        {
            // 将第一个字符转换为小写，方便后续比较
            char firstChar = tolower(word[0]);

            // 检查是否为元音字母
            switch (firstChar)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowelCount++;
                break;
            default:
                consonantCount++;
                break;
            }
        }
        else
        {
            // 如果不是字母开头，计入其他类
            otherCount++;
        }
    }

    // 输出分类结果
    cout << "\nSummary:" << endl;
    cout << "Words starting with vowels: " << vowelCount << endl;
    cout << "Words starting with consonants: " << consonantCount << endl;
    cout << "Other words: " << otherCount << endl;

    return 0;
}
