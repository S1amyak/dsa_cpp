#include<iostream>
using namespace std;

//REVERSE A STRING 

void reverse(char name[], int len){
    int start = 0;
    int end = len - 1;
    while(start < end){
        swap(name[start ++ ],name[end--]);
    }
}

int length(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count ++;
    }
    return count;
}

int main(){
    char name[20];
    cout << "enter your name" << endl;
    cin >> name;
    int len = length(name);
    cout << "length is: "<< len << endl;

    reverse(name,len);
    cout << "your reverse name is: " << name << endl;
}