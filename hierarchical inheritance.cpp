#include<iostream>
using namespace std;
// hierarchical inheritance

class A{
    public:
    void func1(){
        cout << "inside function 1" << endl;
    }
};

class B: public A{
    public:
    void func2(){
        cout << "inside function 2" << endl;
    }
};

class C: public A{
    public:
    void func3(){
        cout << "inside function 3" << endl;
    }
};
int main(){
    cout << "class A" << endl;
    A obj1;
    obj1.func1();

    cout << "class B" << endl;
    B obj2;
    obj2.func2();
    obj2.func1();

    cout << "class C" << endl;
    C obj3;
    obj3.func3();
    obj3.func1();
}