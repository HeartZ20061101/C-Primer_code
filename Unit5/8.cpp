#include <iostream>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    int MAX_SIZE = 100;
    char word[MAX_SIZE];
    int count = 0;
    cout << "请输入单词：" << endl;
    while (true)
    {
        cin >> word;
        if (strcmp(word, "done") == 0)
        {
            break;
        }
        count++;
    }

    cout << "总共输入了" << count << "个单词" << endl;
}