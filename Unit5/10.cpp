#include <iostream>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    cout << "请输入行数：" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << ".";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}