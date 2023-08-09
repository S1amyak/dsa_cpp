#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque <int> d;
    // for adding the element in the last
    d.push_back(1);

    // for adding the element in the front
    d.push_front(2);

    for(int i: d){
        cout << i <<" ";
    }

    cout << endl;
    // for removing the last element
    d.pop_back();
        for(int i: d){
        cout << i <<" ";
    }

    cout << endl;

    // for removing the first element
    d.pop_front();
        for(int i: d){
        cout << i <<" ";
    }

    cout << "front" << d.front() << endl;
    cout << "back" << d.back() << endl;
    cout << "empty or not? " << d.empty() << endl;

    // for deleting a 1st element
    d.erase(d.begin() , d.begin() + 1);
}