#include<iostream>
using namespace std;
//program to print counting 

void printCounting(int n){
    for (int i = 1 ; i <= n; i++){
        cout << i << endl;
    }
}

int main(){
    int n;
    cout << "enter the value of n: " << endl;
    cin >> n;

    printCounting(n);
    return 0;
}