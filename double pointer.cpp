#include<iostream>
using namespace std;
// double pointer
int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "printing p" << p << endl;
    cout << "address of p" << p << endl;
    cout<< *p2 << endl;

    cout << i << endl;
    cout << *p <<endl;
    cout<< **p2 << endl;
}