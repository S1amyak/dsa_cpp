#include<iostream>
using namespace std;
// 2D array
// linear search in 2d array
bool linearSearch(int arr[][4], int target,int row, int column){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if (arr[i][j] == target)
            return true;
        }
    }
    return false;
}
int main(){
    // take input
    int arr[3][4];
    int target;
    cout << "enter the elements of the array" << endl;
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 4;j++){
            cin >> arr[i][j];
        }
    }

    cout<<"enter the target to be searched" << endl;
    cin >> target;

    if(linearSearch(arr,target,3,4)){
        cout << "found" << endl;
    }
    else{
        cout << "not found" << endl;
    }

}