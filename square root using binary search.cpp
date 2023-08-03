#include<iostream>
using namespace std;
// square root using binary search 
int squareRoot(int n){
    int start = 0;
    int end = n;
    int mid = (start + end)/2;
    int ans = -1;
    while(start <= end){
        int square = mid * mid;
        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid; 
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return ans;
}


int main(){
    int n;
    cout << "enter the number for square root to find: " << endl;
    cin >> n;
    cout << "square root is: " << squareRoot(n) << endl;
}