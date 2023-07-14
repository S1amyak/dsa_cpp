#include <iostream>
using namespace std;
// switch case
int main()
{
    int num = 2;

    switch (num)
    {
    case 1: // can onlu be integer and character
        cout << "first" << endl;
        break;

    case 2:
        cout << "second" << endl;
        break;

    default: // not mandatory
        cout << "default" << endl;
    }
}
