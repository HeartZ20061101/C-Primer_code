#include <iostream>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int MAX_SIZE = 100;
    string word = " ";
    int count = 0;
    cout << "请输入单词：" << endl;
    while (1)
    {
        cin >> word;
        if (word == "done")
        {
            break;
        }
        count++;
    }

    cout << "总共输入了" << count << "个单词" << endl;
}