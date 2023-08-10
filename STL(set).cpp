#include<iostream>
#include<set>
using namespace std;
// SET
int main(){
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    for(auto i :s){
        cout << i << endl;
    }

    s.erase(s.begin());
    for(auto i :s){
        cout << i << endl;
    }

    cout << "count---> " << s.count(5) << endl;
    set<int> :: iterator itr= s.find(5);

    cout << "iterator---> " << *itr << endl;


}