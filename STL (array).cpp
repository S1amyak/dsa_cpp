#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic[4] = {1,2,3,4};
    array<int,4> a = {1,2,3,4};
    int size = a.size();
    cout << "size of array is" << size << endl;

    // for printing number at any index
    cout << "number at index 2 is: " << a.at(2) << endl;

    // for checking empty or not
    cout << a.empty() << endl;

    // for printing first element
    cout << a.front() << endl;

    // for printing last element
    cout << a.back() << endl;
}