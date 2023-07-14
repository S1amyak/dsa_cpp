#include <iostream>
using namespace std;
int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int den = factorial(n - r) * factorial(r);
    int ans = num / den;

    return ans;
}
int main()
{
    int n, r;
    cout << "enter value of n: " << endl;
    cin >> n;

    cout << "enter value of r: " << endl;
    cin >> r;
    int answer = nCr(n, r);
    cout << "answer of nCr is : " << answer << endl;
}