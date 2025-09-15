#include <iostream>
#include <string>
#include <array>
using namespace std;
// 要求输入a，b输出a与b之间所有整数的和
#include <iostream>
using namespace std;

int main()
{
    int sum = 0; // 必须初始化为0！
    int a, b;

    cout << "请输入a: ";
    cin >> a;
    cout << "请输入b: ";
    cin >> b;

    // 确定较小值和较大值
    int start = (a < b) ? a : b;
    int end = (a > b) ? a : b;

    // 计算区间和
    for (int i = start; i <= end; i++)
    {
        sum += i;
    }

    cout << a << " 到 " << b << " 之间所有整数的和为: " << sum << endl;
    return 0;
}
