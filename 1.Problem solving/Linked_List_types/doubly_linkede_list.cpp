#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this ->data = d;
        this ->prev= NULL;
        this ->next =NULL;

    }

    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is freed for node with data " << value << endl;
    }

    
};

void print(Node* head){
        Node* temp = head ;
        while(temp != NULL){
            cout << temp -> data << " ";
            temp = temp -> next;

        }
        cout << endl; 
    }

int getlength(Node* head){
        int len = 0;
        Node* temp = head ;
        while(temp != NULL){
            len++;
            temp = temp -> next;

        }
        return len;
    }

void insertAtHead(Node* &tail, Node* &head, int d){

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp ;
        
    }

}
void insertAtTail(Node* &tail, Node* &head, int d){

    if(head== NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
        
    }

    
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;

    }
    
}

void insertAtPosition(Node* &tail, Node* &head, int position , int d){
    if (position == 1){
        insertAtHead(tail,head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt<(position -1)){
        temp= temp -> next;
        cnt++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail,head,d);
        return;
    }

    Node* newNode = new Node(d);
    newNode -> next = temp -> next;
    temp -> next -> prev =newNode;
    newNode -> prev = temp;
    temp -> next = newNode;

    

}

void deleteNode(int position, Node* &head, Node* &tail){
    if (position ==1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;

    }
    else {
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position ){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        if(curr -> next != NULL){
            curr -> next -> prev = prev;
        }
        curr -> next = NULL;
        if(tail == curr){
            tail = prev;
        } 
        delete curr;

    }
    

}



int main(){
    
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    
    

    insertAtHead(tail,head, 12);
    print(head);

    insertAtHead(tail,head, 13);
    print(head);

    insertAtHead(tail,head, 15);
    print(head);

    insertAtTail(tail,head, 25);
    print(head);

    insertAtPosition(tail, head, 5, 100);
    print(head);

    insertAtPosition(tail, head, 6, 101);
    print(head);

    insertAtPosition(tail, head, 7, 102);
    print(head);

    insertAtPosition(tail, head, 1, 99);
    print(head);

    deleteNode(8, head, tail);
    print(head);

    cout<<"head " << head -> data << endl;
    cout<<"tail " << tail -> data << endl;

    cout << getlength(head) << endl;

    return 0;

}