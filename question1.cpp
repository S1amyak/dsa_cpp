#include <iostream>
using namespace std;
// find diff b/w product and sum of digits of a number?
// for last digit remainder after dividing by 10
// for remaining number divide by 10 and repeat

int main()
{
    int n;
    cout << "enter the number: " << endl;
    cin >> n;
    int prod = 1;
    int sum = 0;

    while (n != 0)
    {
        int digit = n % 10;
        sum += digit;
        prod *= digit;
        n = n / 10;
    }
    int answ = prod - sum;
    cout << answ << endl;
}