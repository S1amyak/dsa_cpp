#include<iostream>
#include<vector>
using namespace std;

// print like spiral
vector <int> printSpiral(vector<vector<int>> matrix){
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0 ;
    int total = row * col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    vector<int> ans;

    while(count < total){
        // starting row print

        for(int index = startingCol;count < total &&  index <= endingCol; index++){
            ans.push_back(matrix[startingRow][index]);
            count ++;
        }
        startingRow ++;

        // ending col print

        for(int index = startingRow; count < total && index <= endingCol; index++){
            ans.push_back(matrix[index][endingCol]);
            count ++;
        }
        endingCol --;

        // for ending row print
        for(int index = endingCol; count < total && index >= startingCol; index--){
            ans.push_back(matrix[endingRow][index]);
            count ++;
        }
        endingRow--;
    }

    // for ending col print
        for(int index = endingRow; count < total && index >= startingCol; index--){
            ans.push_back(matrix[index][endingCol]);
            count ++;
        }
        endingCol--;
        return ans;
}


int main(){
    vector<vector<int>> matrix;

    int nRows;
    int mCols;

    cout << "enter the number of rows: " << endl;
    cin >> nRows;

    cout << "enter the number of columns: " << endl;
    cin >> mCols;

    for(int i = 0 ; i < nRows; i++){
        vector<int> row;
        for(int j = 0; j < mCols; j++){
            int element;
            cout << "enter the element at position(" << i << "," << j << ")" << endl;
            cin >> element;
            row.push_back(element);
        }
        matrix.push_back(row);
    }

    vector<int> result = printSpiral(matrix);
    cout << "spiral like traversal of 2D array: " << endl;
    for(int element : result){
        cout << element << " ";
    }

}