#include<iostream>
#include<vector>
using namespace std;
// print like wave

vector<int> printLikeWave(vector<vector <int>> arr, int nRows, int mCols){
    vector<int> ans;
    for (int col = 0; col < mCols; col++){
        if (col & 1){
            //odd index = bottom to top
            for (int row = nRows-1; row >= 0; row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for (int row = 0; row < nRows; row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> arr;

    int nRows;
    int mCols;
    cout << "enter the number of rows: " << endl;
    cin >> nRows;

    cout << "enter the number of columns: " << endl;
    cin >> mCols;

    for (int i = 0; i < nRows; ++i) {
        vector<int> row;  // Create a new row vector
        for (int j = 0; j < mCols; ++j) {
            int element;
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> element;
            row.push_back(element);  // Add element to the current row
        }
        arr.push_back(row);  // Add the current row to the 2D vector
    }
    vector<int> result = printLikeWave(arr,nRows,mCols);


    cout << "Wave-style traversal of the 2D vector:" << endl;
    for (int element : result) {
        cout << element << " ";
    }
}