#include<iostream>
using namespace std;
// row wise sum
void rowWiseSum(int arr[][4], int row,int col){
    for(int row = 0; row < 3; row++){
        int sum = 0;
        for (int col = 0; col < 4;col++){
            sum += arr[row][col];
        }
        cout << "sum of" << row << "row is: " << sum << endl;
    }
}
int main(){
    int arr[3][4];
    cout << "enter the elements of the array" << endl;
    for(int row = 0; row < 3; row++){
        for (int col = 0; col < 4;col++){
            cin >> arr[row][col];
        }
    }

    rowWiseSum(arr,3,4);
}