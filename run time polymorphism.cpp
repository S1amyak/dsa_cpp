#include<iostream>
using namespace std;
// run time polymorphism
class Animal{
    public:
    void speak(){
        cout << "speaking" << endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        cout << "barking" << endl;
    }
};
int main(){
    Dog g;
    g.speak();
}
