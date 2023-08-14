#include<iostream>
#include<string>
using namespace std;
// permutation in a string
bool checkEqual(int a[26], int b[26]){
    for (int i = 0; i < 26; i++){
        if(a[i] == b[i]){
        return 0;
        }
        return 1;
    }
}

bool checkInclusive(string s1, string s2){
    int count1[26] = {0};
    for(int i = 0; i < 26; i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }
    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};
    while((i < windowSize) && (i < s1.length())){
        int index = s2[i]  -'a';
        count2[index] ++;
        i++;
    } 

    if(checkEqual(count1,count2)){
        return 1;
    }

    while(i < s2.length()){
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index] ++ ;

        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;
        i++;
        if(checkEqual(count1,count2))
            return 1;
        return 0;
    }
}

int main(){
    string s1;
    cout << "enter the first string to be checked: " << endl;
    cin >> s1;

    string s2;
    cout << "enter the second string: " << endl;
    cin >> s2;
    cout << "first string is present or not? " << checkInclusive(s1,s2) << endl;
}