#include<iostream>
using namespace std;
//bubble sort
void bubbleSort(int arr[], int n){
    for (int i = 1; i<n ;i++){
        for (int j = 0; j < n-i; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[5] = {1,5,4,2,3};
    bubbleSort(arr, 5);
    for (int i = 0;i < 5;i++){
        cout << arr[i] << endl;
    }
}