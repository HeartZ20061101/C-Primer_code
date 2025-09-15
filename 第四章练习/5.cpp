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
    CandyBar snack = 
    {
        "Mocha Munch",
        2.3,
        350
    };
    cout << snack.brand << endl;
    cout << snack.weight << endl;
    cout << snack.Kll << endl;
    return 0;
}