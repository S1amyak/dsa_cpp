#include<iostream>
#include<vector>
using namespace std;

// binary search in 2d array

bool searchMatrix(vector<vector<int>> matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;


    int mid = start + (end - start)/2;

    while(start <= end){
        int element = matrix[mid/col][mid%col];

        if(element == target){
            return 1;
        }
        if(element < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        int mid = start + (end - start)/2;
    }
    return 0;
}
int main(){
    vector<vector<int>> matrix;
    int row,col;
    int target;

    cout << "enter the number of row" << endl;
    cin >> row;

    cout << "enter the number of columns" << endl;
    cin >> col;

    cout << "enter the target to be found in matrix" << endl;
    cin >> target;

    for(int i = 0; i < row; i++){
        vector<int> rows;
        for(int j = 0; j < col; j++){
            int element;
            cout << "enter the element at position (" << i << "," << j << ")" << endl;
            cin >> element;
            rows.push_back(element);
        }
        matrix.push_back(rows);
    }

    cout << "element is present or not? " << searchMatrix(matrix,target) << endl;
}