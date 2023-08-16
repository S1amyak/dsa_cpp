#include<iostream>
using namespace std;
// largest row  sum

int largestRowSum(int arr[][3], int row, int col){
    int maxi = 0;
    int rowIndex = -1;
    for(int row = 0; row < 3; row++){
        int sum = 0;
        for (int col = 0; col < 4;col++){
            sum += arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    return rowIndex;
}

int main(){
    int arr[3][3];
    cout << "enter the elements of the array" << endl;
    for(int row = 0; row < 3; row++){
        for (int col = 0; col < 3;col++){
            cin >> arr[row][col];
        }
    }

    cout << "largest row sum is:"<<largestRowSum(arr,3,3);
}