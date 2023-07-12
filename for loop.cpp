#include <iostream>
using namespace std;
// print the number 1 to n
int main()
{
    int n;
    cout << "enter the value of n: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}

// find sum of n numbers
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n: " << endl;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum is : " << sum << endl;
}