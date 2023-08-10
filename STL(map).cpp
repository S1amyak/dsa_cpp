#include<iostream>
#include<map>
using namespace std;
// STL(map)
int main(){
    map<int,string> m;
    m[1] = "samyak";
    m[2] = "jain";
    m[13] = "lkasl";

    m.insert({5,"bheem"});
    cout << "before erase" << endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    m.erase(13);
    cout << "after erase" << endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}