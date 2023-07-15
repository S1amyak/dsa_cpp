#include <iostream>
using namespace std;
// arrays

int main()
{
    // declare
    int number[15];

    // accessing array
    cout << "value at index 1" << number[1] << endl;

    // initalization array
    int second[3] = {5, 6, 7};
    cout << "value at index 0" << second[0] << endl;

    int third[15] = {2, 7};
    // printing array
    for (int i = 0; i <= 14; i++)
    {
        cout << third[i] << endl;
    }

    int fourth[15] = {0}; // intialized all elements with 0
    for (int i = 0; i <= 14; i++)
    {
        cout << fourth[i] << endl;
    }

    int fifth[15] = {1}; // intialized first element with 1.
    for (int i = 0; i <= 14; i++)
    {
        cout << fifth[i] << endl;
    }

    return 0;
}