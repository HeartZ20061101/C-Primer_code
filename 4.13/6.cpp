#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
    string brand;
    double weight;
    int Kll;
};

int main()
{
    CandyBar arr[3];
    CandyBar candy1 =
        {
            "A",
            0.1,
            100};
    CandyBar candy2 =
        {
            "B",
            0.2,
            200};
    CandyBar candy3 =
        {
            "C",
            0.3,
            300};
    arr[0] = candy1;
    arr[1] = candy2;
    arr[2] = candy3;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].brand << endl;
        cout << arr[i].weight << endl;
        cout << arr[i].Kll << endl;
    }
    return 0;
}