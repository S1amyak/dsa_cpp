#include<iostream>
using namespace std;
// search in rotated sorted array
int binarySearch(int arr[], int key, int s, int e){
    int start = s;
    int end = e;
    int mid = (start + end)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]  > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}


int piv(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = (start + end)/2;
    } 
    return start;
}
int main(){
    int arr[5] = {7,9,1,2,3};
    int key;
    int size;
    cout << "enter the key to be searched: " << endl;
    cin >> key;

    cout << "enter the size of the array: " << endl;
    cin >> size;

    int pivot = piv(arr,5);
    int result;
    if (key >= arr[pivot] && key <= arr[size - 1]){
        result =  binarySearch(arr,key,pivot,size - 1);
    }
    else{
        result =  binarySearch(arr,key,0,pivot - 1);
    }
    cout << "index of element to be searched is: " << result << endl;
    return 0;
}