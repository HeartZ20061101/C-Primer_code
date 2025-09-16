#include <iostream>
#include <string>
#include <array>
#include <iostream>
using namespace std;
struct car
{
    string make;
    int year;
};

int main()
{
    int CarNum = 0;
    cout << "请输入汽车数量:" << endl;
    cin >> CarNum;
    car *ArrCar = new car[CarNum];
    for (int i = 0; i < CarNum; i++)
    {
        cout << "请输入汽车的生产厂商:" << endl;
        getline(cin, ArrCar[i].make);
        cout << "请输入汽车的生产年份:" << endl;
        cin >> ArrCar[i].year;
        cin.ignore(); // 清除年份输入后的换行符
    }
    for (int i = 0; i < CarNum; i++)
    {
        cout << ArrCar[i].year << " " << ArrCar[i].make << endl;
    }

    delete[] ArrCar;
}