#include<iostream>
using namespace std;
//POLYMORPHISM
// function overloading
class A{
    public:
    void sayhello(){
        cout << " hello " << endl;
    }
        void sayhello(string name){
        cout << " hello " << endl;
    }
};

int main(){
    A obj1;
    obj1.sayhello();
    obj1.sayhello("samyak");
}