#include <iostream>
#include <string>
#include <array>
#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    int sum = 0;
    cout << "请输入x" << endl;
    do
    {
        cin >> x;
        sum += x;
        cout << "到目前为止，所有输入的累计和为" << sum << endl;
    } while (x != 0);
}