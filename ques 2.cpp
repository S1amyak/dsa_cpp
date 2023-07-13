#include <iostream>
#include <math.h>
using namespace std;
// reverse a number and if it is beyond storage return 0.
// if ans > intmax/10 || ans < intmin/10 return 0;
int main()
{
    int n;
    cout << "enter a number to be reversed: " << endl;
    cin >> n;
    int int_max = (pow(2, 31)) - 1;
    int int_min = -(pow(2, 31));

    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if ((ans > int_max / 10) || (ans < int_min / 10))
        {
            cout << 0 << endl;
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << "reversed number is: " << ans << endl;
}