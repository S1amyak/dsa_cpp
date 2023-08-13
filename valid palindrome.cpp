#include<iostream>
#include<string>
using namespace std;
// valid palindrome
bool valid(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return 1;
    }
    return 0;
}

char toLower(char ch){
    if((ch >= 'a' && ch <= 'z') ||(ch >= '0' && ch <= '9')){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
    }
}

bool palindrome(string a){
    int start = 0;
    int end = a.length() - 1;
    while(start <= end){
        if(toLower( a[start]) != toLower( a[end])){
            return 0;
        }
        else{
            start ++ ;
            end --;
        }
    }
    return 1;
}

bool isPalindrome(string s){
    string temp = "";

    for(int j = 0; j < s.length(); j++){
        if(valid( s[j])){
            temp.push_back(s[j]);
        }
    }
    for(int j = 0; j < s.length(); j++){
        temp[j] = toLower(temp[j]);
    }
    return palindrome(temp);
}
int main(){
    string s = "A man, a plan,  a canal: Panama";
    cout << "given string is: " << isPalindrome(s) << endl;
}