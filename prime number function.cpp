#include <iostream>
using namespace std;
// program to find prime number

bool primeNumber(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int main()
{
    int a;
    cout << "enter number to be checked: " << endl;
    cin >> a;

    int ans = primeNumber(a);
    if (ans == 0)
    {
        cout << "not a prime number" << endl;
    }
    else
    {
        cout << "prime number" << endl;
    }
}