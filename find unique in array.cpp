#include <iostream>
using namespace std;
// find unique
int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[5] = {2, 3, 2, 3, 5};
    cout << "unique element is: " << findUnique(arr, 5) << endl;
}