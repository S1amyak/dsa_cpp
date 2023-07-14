#include <iostream>
using namespace std;
// function to do power of number
int power(int a, int b)
{
    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = power(a, b);
    cout << "ans is: " << ans << endl;
    return 0;
}