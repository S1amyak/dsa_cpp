#include<iostream>
using namespace std;
// insertion sort
void insertionSort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j >= 0; j--){
            if(arr[j] > temp){
                //shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}
int main(){
    int arr[7] = {9,7,10,5,3,6,2};
    insertionSort(arr, 7);
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
}