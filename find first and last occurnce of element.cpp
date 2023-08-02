#include<iostream>
using namespace std;
// find the element's first position and last position
int firstOccur(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end-size)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-size)/2;
    }
    return ans;
}

int lastOccur(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end-size)/2;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-size)/2;
    }
    return ans;
}


int  main(){
    int odd[5] = {1,2,3,3,5};
    cout << "first occurrence of 3 is: " << firstOccur(odd,6,3) << endl;
    cout << "last occurrence of 3 is: " << lastOccur(odd,6,3) << endl;
}