#include<iostream>
using namespace std;
// reference variables
int main(){
    int i = 5;
    // create a ref variable
    int &j = i;
    cout << ++i <<endl;
    cout << ++j <<endl;
}
