#include <iostream>
using namespace std;
/*
1
1 2
2 3 4
4 5 6 7
*/

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int value = row;
        while (col <= row)
        {
            cout << value << " ";
            value++;
        }
        cout << endl;
        row++;
    }
}