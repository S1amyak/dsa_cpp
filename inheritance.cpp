#include<iostream>
using namespace std;
// inheritance
class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this -> age;
    }
    void setWeight(){
        this -> weight = weight;
    }
};

class Male : public Human{
    public:
    string color;

    void sleep(){
        cout << "Male sleeping" << endl;
    }
};
int main(){
    Male obj1;
    cout << obj1.age << endl;
    cout << obj1.height << endl;
    cout << obj1.weight << endl;
    cout << obj1.color << endl;
    obj1.sleep();
}