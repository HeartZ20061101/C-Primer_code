#include <iostream>
#include <string>
#include <array>
#include <iostream>
using namespace std;
int main()
{
    const int months = 12;
    int total = 0;
    string month[months]{"一月", "二月", "三月", "四月", "五月", "六月", "七月", "八月", "九月", "十月", "十一月", "十二月"};
    int books[months];
    for (int i = 0; i < months; i++)
    {
        cout << "请输入" << month[i] << "销售额" << endl;
        cin >> books[i];
        total += books[i];
    }
    cout << "总销售额为：" << total << "本" << endl;
    cout << "\n各月销售额详情：" << endl;
    for (int i = 0; i < months; i++)
    {
        cout << month[i] << "销售额为" << books[i] << endl;
    }
}