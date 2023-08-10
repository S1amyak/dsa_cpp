#include<iostream>
using namespace std;
// move zeroes

void moveZeroes(int arr[], int size){
    int i = 0;
    for (int j = 0; j < size; j++){
        if(arr[j] != arr[i]){
            swap(arr[i], arr[j]);
            i++;
        }
    }
}
void print(int arr3[], int size){
    for(int i = 0; i < size; i++){
        cout << arr3[i] << " ";
    }cout << endl;
}

int main(){
    int arr[6] = {0,1,0,3,12,0};
    moveZeroes(arr,6);
    print(arr,6);

}
