#include <iostream>
#include <string>
#include <array>
#include <iostream>
using namespace std;
int main()
{
    double d = 100.0;
    double c = 100.0;
    int year = 0;
    while (c <= d)
    {
        year++;
        d = 100 + (10 * year);
        c *= 1.05;
    }
    cout << year << "年后，Cleo的投资价值超过了Daphne" << endl;
    cout << "Cleo的价值为" << c << endl;
    cout << "Daphne的价值为" << d << endl;
}