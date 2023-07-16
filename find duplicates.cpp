#include <iostream>
using namespace std;
// find duplicates
// numbers in array are from 1 to n-1
int findDuplicates(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 4};
    cout << "duplicate number is: " << findDuplicates(arr, 5) << endl;
}