#include<iostream>
using namespace std;
// doubly linked list

class Node{
    public:
    int data;
    Node * prev;
    Node * next;

    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void print(Node * head){
    Node * temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtHead(Node * &head,int data){
    Node * temp = new Node(data);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}
void insertAtTail(Node * &tail,int data){
    Node *temp = new Node(data);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}
int length(Node* head){
    Node * temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt ++;
        temp = temp -> next;
    }
    return cnt;
}

void insertAtPosition(Node * &head,Node * &tail, int position,int data){
    if(position == 1){
        insertAtHead(head,data);
        return;
    }

    Node * temp = head;
    int cnt = 1;
    while(cnt < position - 1){
        temp = temp -> next;
        cnt ++;
    }
    Node * nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp; 
}

int main(){
    Node * node1 = new Node(10);
    Node * head = node1;
    Node * tail = node1;
    print(head);
    cout << "length is " << length(head) << endl;

    insertAtHead(head,11);
    print(head);

    insertAtHead(head,14);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtTail(tail,25);
    print(head);

    insertAtPosition(head,tail,2,100);
    print(head);
    return 0;
}