#include <iostream>
using namespace std;
// program to check even or odd
// 1- even
// 0-odd

bool evenOdd(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a;
    cout << "enter number to be checked" << endl;
    cin >> a;

    int answer = evenOdd(a);
    cout << answer << endl;
}
