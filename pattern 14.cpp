#include<iostream>
using namespace std;
/*
   *
  **
 ***
****  
*/

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row <= n){
        int space = n - row;
        while(space){
            cout << " ";
            space --;
        }
        int col = 1;
        while(col <= row){
            cout <<"*";
            col ++;
        }
        cout << endl;
        row++;
    }
}


/*
****
 ***
  **
   *
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    while(row <= n){
        int space = 0;
        while(space <= row - 1){
            cout <<" ";
            space ++;
        }
        int star = 1;
        while(star <= n - row + 1){
            cout << "*";
            star ++;
        }
        cout << endl;
        row ++;
    }
}
