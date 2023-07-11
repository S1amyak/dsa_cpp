#include <iostream>
using namespace std;
/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
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
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}