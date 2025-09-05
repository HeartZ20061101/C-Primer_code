#include <iostream>
#include <string>
using namespace std;
struct pisa
{
    string company;
    float pisa_D;
    float pisa_W;
};

int main()
{
    pisa p1;
    cout << "请输入披萨公司名：" << endl;
    getline(cin, p1.company);
    cout << "请输入披萨直径：" << endl;
    cin >> p1.pisa_D;
    cout << "请输入披萨重量：" << endl;
    cin >> p1.pisa_W;

    cout << "披萨公司名为：" << p1.company << endl;
    cout << "披萨直径为：" << p1.pisa_D << endl;
    cout << "披萨重量为：" << p1.pisa_W << endl;
    return 0;
}