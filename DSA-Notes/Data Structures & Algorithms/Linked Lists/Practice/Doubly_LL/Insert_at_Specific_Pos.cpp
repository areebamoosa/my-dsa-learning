// Doubly Linkedlist : Insert at Position
// Start with: 10 ⇄ 20 ⇄ 30
// Insert 15 at position 1 → Expected: 10 ⇄ 15 ⇄ 20 ⇄ 30

#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* prev;
    Node* next;

    Node(int d){
        data = d;
        prev = NULL;
        next = NULL;
    }
};

class linkedList{
    Node* head;
    Node* tail;

    public:

    linkedList(){
        head = tail = NULL;
    }

    //Push front function
    void push_front(int data){
        Node* newNode = new Node(data);
        if ( head == NULL){
            head = tail = newNode;
            return;
        } else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        }
    }


    // Insert at specific position function
    void insert_val(int data, int pos){
        Node* newNode = new Node(data);
        if ( pos == 0){
        if (head == NULL){
        head = tail = newNode;
        return;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        } 
        if (pos < 0 ){
            cout << "Invalid position" << endl;
        }
        Node* temp = head;
        for (int i =0; i <pos-1 && temp!= NULL; i ++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        newNode->next->prev = newNode;
        newNode->prev->next = newNode;

        // Inserting at the end : tail position
        if (temp->next == NULL) { 
        temp->next = newNode;
        newNode->prev = temp;
        tail = newNode;
        return;
    }
        }

        // Print ll function
        void print_ll(){
            Node* temp = head;
            while ( temp != NULL){
                cout << temp->data << " ⇄ ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
};

int main(){
    linkedList ll;
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);

    ll.insert_val(15,1);

    ll.print_ll();
    return 0;
}