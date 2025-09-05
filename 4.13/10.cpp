#include <iostream>
#include <string>
#include <array>
using namespace std;
int main()
{
    double sum = 0.0;
    double avg = 0.0;
    const int times = 3;
    array<double, times> store;
    for (int i = 0; i < times; i++)
    {
        cout << "请输入第" << i + 1 << "次成绩" << endl;
        cin >> store[i];
    }
    for (int i = 0; i < times; i++)
    {
        cout << "第" << i + 1 << "次" << "成绩为：" << store[i] << endl;
    }
    for (int i = 0; i < times; i++)
    {
        sum += store[i];
    }
    avg = sum / times;
    cout << "平均数为：" << avg;

    return 0;
}