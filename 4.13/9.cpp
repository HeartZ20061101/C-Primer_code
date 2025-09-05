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
    CandyBar *C = new CandyBar[3];
    C[0] = {"A", 0.1, 100};
    C[1] = {"B", 0.2, 200};
    C[2] = {"C", 0.3, 300};

    for (int i = 0; i < 3; i++)
    {
        cout << C[i].brand << endl;
        cout << C[i].weight << endl;
        cout << C[i].Kll << endl;
    }
    delete[] C;
    return 0; 
}