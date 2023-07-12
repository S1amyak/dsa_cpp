#include <iostream>
using namespace std;
// prime number

int main()
{
    int n;
    cout << "enter number to be checked:" << endl;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "not prime" << endl;
            break;
        }
        else
        {
            cout << "prime number" << endl;
        }
    }
}