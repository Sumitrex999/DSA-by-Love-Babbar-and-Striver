#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if (this -> next != NULL){
            delete next;
            
        }
        cout << "Memory is free for node with data "<< value << endl;
    }
    
};

void insertNode( Node* &tail, int element, int d){
    if( tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        Node* curr = tail;

        while(curr -> data != element){
            curr = curr -> next;
        }
        Node* newNode = new Node(d);
        newNode -> next = curr -> next;
        curr -> next = newNode;
    }

}

void print(Node* tail){
    Node* temp = tail;

    if(tail == NULL){
        cout << "List is empty." << endl;
        return;
    }

    Node* curr = tail;
    if (tail != NULL) {
        do {
            cout << curr->data << " ";
            curr = curr->next;
        } while (curr != tail);
    }
    cout << endl;
}

void deleteNode(Node* &tail, int value){

    if (tail == NULL){
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    else{

        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value ){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next ;

        if(curr == prev){
            tail = NULL;
        }

        if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;

    }
}



int main (){

    Node* tail = NULL;
    

    insertNode(tail, 9, 6);
    print(tail);

    // insertNode(tail, 6, 9);
    // print(tail);

    // insertNode(tail, 9, 10);
    // print(tail);

    // insertNode(tail, 10, 11);
    // print(tail);

    // insertNode(tail, 11, 12);
    // print(tail);

    deleteNode(tail, 6);
    print(tail);

    return 0;



}
