#include<iostream>
using namespace std;
// CHECK PALINDROME

bool palindrome(char name[],int len){
    int start = 0;
    int end = len - 1;
    while(start <= end){
        if(name[start] != name[end]){
            return 0;
        }
        else{
            start ++ ;
            end --;
        }
    }
    return 1;
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
    cout << "enter string to be checked if palindrome or not?" << endl;
    cin >> name;
    int len = length(name);

    cout << "given string is: " <<palindrome(name,len) << endl;
}