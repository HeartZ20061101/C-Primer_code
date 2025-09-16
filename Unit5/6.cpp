#include <iostream>
#include <string>
#include <array>
#include <iostream>
using namespace std;
int main()
{
    const int months = 12;
    const int years = 3;
    int TotalYears = 0;
    int total[years] = {0};
    string month[months]{"一月", "二月", "三月", "四月", "五月", "六月", "七月", "八月", "九月", "十月", "十一月", "十二月"};
    int books[years][months];
    for (int i = 0; i < years; i++)
    {
        cout << "请输入第" << i + 1 << "年的" << "销售量" << endl;
        for (int j = 0; j < months; j++)
        {
            cout << "请输入" << month[j] << "销售额" << endl;
            cin >> books[i][j];
            total[i] += books[i][j];
        }
    }
    for (int i = 0; i < years; i++)
    {
        TotalYears += total[i];
    }
    cout << "三年的总销售量为：" << TotalYears << endl;

    for (int i = 0; i < years; i++)
    {
        cout << "第" << i + 1 << "年" << "的销售量为：" << total[i] << endl;
    }
}