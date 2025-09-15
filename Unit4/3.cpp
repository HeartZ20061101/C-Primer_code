#include <iostream>
#include <cstring>
using namespace std;
// 3. 编写一个程序，它要求用户首先输入其名，然后输入其姓；然后程序使用一个逗号和空格能的名组合起来，并存储和显示组合结果。请使用 char 数组和头文件cstring 中的函数。下面是该程序的的情形：
// Enter your first name : Flip
// Enter your last name : Fleming
// Here's the information in a single string: Fleming, Flip
int main()
{
    const int arSize = 20;
    char FirstName[arSize];
    char LastName[arSize];
    char FullName[arSize * 2] = "";
    cout << "Enter u first name:" << endl;
    cin.getline(FirstName, arSize);
    cout << "Enter u last name:" << endl;
    cin.getline(LastName, arSize);

    // 使用 cstring 函数组合字符串
    strcpy(FullName, LastName);
    strcat(FullName, ", ");
    strcat(FullName, FirstName);
    cout << "Here's the information in a single string:" << FullName << endl;
    return 0;
}