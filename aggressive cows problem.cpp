#include<iostream>
#include<algorithm>
using namespace std;
// aggressive cows problem
bool isPossible(int stalls[], int cows, int mid){
    int cowCount = 1;
    int lastPos = stalls[0];
    for (int i = 0; i < 5; i++){
        if (stalls[i] - lastPos >= mid){
            cowCount++;
            if(cowCount == cows){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(int stalls[],int cows){
    sort(stalls,stalls+5);
    int start = 0;
    int maxi = -1;
    for(int i = 0;i < 5; i++){
        maxi = max(maxi,stalls[i]);
    }
    int end = maxi;
    int ans = -1;
    int mid = (start + end)/2;

    while(start <= end){
        if (isPossible(stalls,cows,mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return ans; 
}

int main(){
    int stalls[5] = {4, 2, 1, 3, 6};
    int result = aggressiveCows(stalls,2);
    cout << "Answer is: "<< result << endl;
}