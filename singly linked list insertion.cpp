#include<iostream>
using namespace std;
// singly linked list
// add new element at starting
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head,int d){
    // new node create
    Node *temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertAtTail(Node* &tail,int d){
    Node *temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}
void insertAtPosition(Node* &head,int position,int d){
    Node* temp = temp;
    int cnt = 1;
    while(cnt < position -1){
        temp = temp->next;
        cnt ++;
    }
    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp-> next = nodeToInsert;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << endl;
        temp = temp -> next;
    }
    cout << endl;
}
int main(){
    // created a new node
    Node * node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,12);
    insertAtTail(tail,19);
    insertAtPosition(2,80);
    print(head);
}