#include<iostream>
using namespace std;
// binary search 
// condition - element should be in monotonic function 
int binarySearch(int arr[], int size , int key){
    int start = 0;
    int end = size - 1;

    int mid = (start + end)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        //go to right part of array if key is greater 
        if(key > arr[mid]){
            start = mid + 1;

        }

        //go to left part of array if key is smaller 
        else{
            end = mid - 1;  
        }
        mid = (start + end)/2;
    }
    return -1;
}


int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {2,8,11,14,16};
    
    int index = binarySearch(even,6,12); 
    cout << "index of 12 is: " << index << endl;    

}