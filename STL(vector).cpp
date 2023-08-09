#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    // for initialising all elements with 1
    vector<int> a(5,1);

    // for creating a copy of a vector into new vector
    vector<int> last(a);
    // capacity of vector
    cout << "capacity -->" << v.capacity() << endl;

    // for inserting elements
    v.push_back(1);
    cout << "capacity -->" << v.capacity() << endl;

    // for removing the element
    v.pop_back(1);
    
    // for clearing a vector
    v.clear();
}