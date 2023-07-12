#include <iostream>
using namespace std;
// bitwise operators

int main()
{
    int a = 3;
    int b = 6;

    cout << " a & b : " << (a & b) << endl;
    cout << " a | b : " << (a | b) << endl;
    cout << " a ^ b : " << (a ^ b) << endl;
    cout << " ~b : " << (~b) << endl;

    cout << "17 >> 2: " << (17 >> 2) << endl; // for right shift divide by 2
    cout << "5 << 1: " << (5 << 1) << endl;   // for left shift mulitply by 2
}