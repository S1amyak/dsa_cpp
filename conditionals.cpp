#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter value of n: " << endl;
    cin >> n;
    if (n > 0)
    {
        cout << n << " is postive" << endl;
    }
    else if (n < 0)
    {
        cout << n << " is negative" << endl;
    }
    else
    {
        cout << n << " is zero" << endl;
    }
}