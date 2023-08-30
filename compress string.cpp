#include<iostream>
#include<vector>
using namespace std;

// string compression
int compress(vector <char> chars){
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();
    while(i < n){
        int j = i + 1;
        while (j < n && chars[i] == chars[j]){
            j++;
        }
        chars[ansIndex] = chars[i];
        int count = j + 1;
        if(count > 1){
            string cnt = to_string(count);
            for(char ch :cnt){
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main(){
    vector<char> chars;
    chars.push_back('a');
    chars.push_back('a');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('b');
    cout << compress(chars) << endl;
}