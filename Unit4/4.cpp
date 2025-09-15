#include <iostream>
#include <string>
using namespace std;
// 4. 编写一个程序，它要求用户首先输入其名，然后输入其姓；然后程序使用一个逗号和空格能的名组合起来，并存储和显示组合结果。请使用 string 数组和头文件string 中的函数。下面是该程序的的情形：
// Enter your first name : Flip
// Enter your last name : Fleming
// Here's the information in a single string: Fleming, Flip
int main()
{
    string FirstName;
    string LastName;
    cout << "Enter u first name:" << endl;
    getline(cin, FirstName);
    cout << "Enter u last name:" << endl;
    getline(cin, LastName);

    LastName += ", " + FirstName;
    cout << "Here's the information in a single string:" << LastName << endl;
    return 0;
}