#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int even[6] = {12, 3, 4, 5, 6, 7};
    int odd[5] = {1, 2, 34, 5};

    swapAlternate(even, 6);
    swapAlternate(odd, 5);

    printArray(even, 6);
    printArray(odd, 5);

    return 0;
}