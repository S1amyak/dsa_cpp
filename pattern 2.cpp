#include <iostream>
using namespace std;
/*
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/
int main()
{
    int i = 1;
    int n;
    cout << "enter no of rows: " << endl;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}