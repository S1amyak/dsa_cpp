#include<iostream>
#include<string>
using namespace std;
// replace spaces with @40

string replaceSpaces(string s){
    string temp = "";

    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(s[i]);
        }
    }
    return temp;

}

int main(){
    int maxLength = 30;
    cout << "enter string" << endl;
    char s[30];
    cin.getline(s,maxLength);
    cout << replaceSpaces(s) << endl;
}

