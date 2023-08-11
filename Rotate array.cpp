#include<iostream>
#include<vector>
using namespace std;
// rotate array

void rotateArray(vector<int>nums, int k){
    vector <int> temp(nums.size());

    for(int i = 0; i < nums.size(); i++){
        temp[(i + k)%nums.size()] = nums[i];
    }

    for(int j = 0; j < temp.size(); j++){
        cout << temp[j] << " " << endl;
    }
}

int main(){
    vector <int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    int k;
    cout << "enter the value for array to be rotated" << endl;
    cin >> k;
    rotateArray(nums, k);
}