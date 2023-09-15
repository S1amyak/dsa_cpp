#include<iostream>
using namespace std;
// circular linked list

class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        int value = this -> data;
        if(this-> next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory freed" << endl;
    }
};

void deleteNode(Node* & tail,int value){
    // empty list
    if(tail == NULL){
        cout << "list is empty" << endl;
        return;
    }
    else{
        //non empty
        //assuming that value is present in the linked list
        Node* prev = tail;
        Node* curr = prev -> next;
        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next  = curr -> next;
        // for 1st node
        if(curr == prev){
            tail = NULL;
        }
        // >= 2 nodes
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;    
    }
}
void insertNode(Node* &tail,int element,int d){
    // assuming that the element is present in the list

    // empty list
    if(tail == NULL){
        Node * newNode = new Node(d);
        tail = newNode;
        newNode -> next= newNode;
    }
    else{
        Node * curr = tail;
        while(curr -> data != NULL){
            curr = curr -> next;
        }// element is found
        Node * temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}
void print(Node * &tail){
    Node * temp = tail;
    if(tail == NULL){
        cout << "list is empty" << endl;
        return;
    }
    do{
        cout << tail -> data << " ";
        tail = tail -> next;
        }while(tail != temp);
}

int main(){
    Node * tail = NULL;
// empty list insert
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
}