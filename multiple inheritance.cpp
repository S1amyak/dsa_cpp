#include<iostream>
using namespace std;

// multiple inheritance
class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout <<"barking" << endl;
    }
};

class Human{
    public:
    string color;
    public:
    void speak(){
        cout << "speaking" << endl;
    }
};

class hybrid :public Animal, public Human{

};

int main(){
    hybrid obj;
    obj.speak();
    obj.bark();
}