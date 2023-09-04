#include<iostream>
using namespace std;
// delete node form linked list
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this-> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "memory is freed" << endl;
    }
};

void insertAtHead(Node* &head,int data){
    // create a new node
    Node *temp = new Node(data);
    temp -> next = head;
    head = temp;
}
void insertAtTail(Node* &tail,int data){
    // create a new node
    Node *temp = new Node(data);
    tail -> next = temp;
    tail = temp;
    
}
void deleteNode(Node* &head,int position){
    if(position == 1){
        Node * temp = head;
        // deleting first node
        head = head -> next;
        temp -> next = NULL;
        // memory free
        delete temp;
    }
    else{
        // deleting node other than one
        Node * curr = head;
        Node * prev = NULL; 
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr-> next;
            cnt ++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}
void insertAtPosition(Node* &head, int position,int data){
    int cnt = 1;
    Node *temp = head;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    Node *nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}
void print(Node * &head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}
int main(){
    // create a first node
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head,12);
    insertAtTail(tail,17);
    print(head);
    deleteNode(head,3);
    print(head);
}