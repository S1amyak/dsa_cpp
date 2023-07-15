#include <iostream>
using namespace std;
int find_sum(int num[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += num[i];
    }
    return sum;
}

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
    cout << "Sum of elements in array is: " << find_sum(num, size) << endl;
}