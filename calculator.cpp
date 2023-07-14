#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter value of a: " << endl;
    cin >> a;

    cout << "enter value of b: " << endl;
    cin >> b;

    char op;
    cout << "enter the operation you want to perform: " << endl;
    cin >> op;

    switch (op)
    {

    case '+':
        cout << "sum is: " << a + b << endl;
        break;

    case '-':
        cout << "subtract is: " << a - b << endl;
        break;

    case '*':
        cout << "multiplication is: " << a * b << endl;
        break;

    case '/':
        cout << "sum is: " << a / b << endl;
        break;
    }
}