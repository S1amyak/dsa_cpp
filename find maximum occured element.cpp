#include<iostream>
#include<string>
using namespace std;
// maximum occurring character

char getMaxOccurrence(string s){
    int arr[26] = {0};
    int number = 0;
// create an array for storing count of characters
    for(int i = 0; i < s.length(); i++){
    // for lower case
    char ch = s[i];
    if (ch >= 'a' && ch <= 'z'){
        number = ch - 'a';
    }
    // for upper case
    else{
        number = ch - 'A';
    }
    arr[number] ++ ;
    }

// find maximum occ character
    int maxi = -1;
    int ans = 0;
    for(int i = 0; i < 26 ; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main(){
    string s;
    cout << "enter the string" << endl;
    
    cin >> s;
    cout << "maximum occurred character is: " << getMaxOccurrence(s);
}

