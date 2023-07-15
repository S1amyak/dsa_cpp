#include <iostream>
using namespace std;
// find max element in array
int get_max(int num[], int n)
{
    int max = num[0];

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

// function for min value
int get_min(int num[], int n)
{
    int min = num[0];

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

// main function
int main()
{
    int size;
    cout << "enter the size of array" << endl;
    cin >> size;

    int num[100];
    // taking input for array
    for (int i = 0; i < size; i++)
    {
        cout << "enter the value of " << i << " element" << endl;
        cin >> num[i];
    }

    cout << "maximum element is: " << get_max(num, size) << endl;
    cout << "minimum element is: " << get_min(num, size) << endl;

    return 0;
}