#include <iostream>
#include <math.h>
using namespace std;
// power of two

int main()
{
    int n;
    cout << "enter number: " << endl;
    cin >> n;

    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);

        if (ans == n)
        {
            cout << "true" << endl;
            break;
        }
    }
}
