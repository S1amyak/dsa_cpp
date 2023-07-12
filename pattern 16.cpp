#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = n;
    int spaces = 0;
    while (row >= 1)
    {
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        }
        int asterick = 0;
        while (asterick < spaces)
        {
            cout << "*";
            asterick++;
        }

        col = row;
        while (col >= 1)
        {
            cout << col;
            col--;
        }

        cout << endl;
        row--;
        spaces += 2;
    }
}