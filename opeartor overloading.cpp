#include<iostream>
using namespace std;
// operator overloading

class B{
    public:
    int a;
    int b;
    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "Output" << value1 - value2 << endl;
    }
};

int main(){
    B obj1,obj2;
    obj1.a = 7;
    obj2.a = 4;
    obj1 + obj2;
}