#include <iostream>
using namespace std;

/*
       1
     1 2 1
   1 2 3 2 1
 1 2 3 4 3 2 1
*/

int main()
{
  int n;
  cin >> n;

  int row = 1;
  while (row <= n)
  {
    // print space
    int space = n - row;
    while (space)
    {
      cout << " ";
      space--;
    }
    // print 2nd triangle
    int col = 1;
    while (col <= row)
    {
      cout << col;
      col++;
    }

    // print 3rd triangle
    int start = row - 1;
    while (start)
    {
      cout << start;
      start--;
    }
    cout << endl;
    row++;
  }
}
