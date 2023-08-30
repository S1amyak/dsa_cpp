#include<iostream>
using namespace std;
//OOPS
// constructors
class Hero{
    private:
    int health;
    public:
    char level;
    Hero(){
        cout << "Constructor called" << endl;
    }

    // parameterized constructor
    Hero(int health,char level){
        this ->health = health;
        this->level = level;
    }

    int getHealth(){
        return health;
    } 
    char getLevel(){
        return level;
    }

    int sethealth(int h){
        health = h;
    }
    char setlevel(char str){
        level = str;
    }
};

int main(){
    cout << "hi" << endl;
    Hero a;
    cout <<"Hello " << endl;
    // a.sethealth(80);
    // a.setlevel('A');
    // cout << "level is:" << a.level <<endl;
    // cout << "health is:" << a.getHealth() <<endl;
}
