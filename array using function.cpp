#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
}

int main()
{
    int first[15] = {0};
    printArray(first, 15);
}