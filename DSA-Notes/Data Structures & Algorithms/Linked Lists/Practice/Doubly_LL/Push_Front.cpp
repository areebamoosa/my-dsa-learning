// Doubly Linked list : Push Front 
// Write a function to insert a node at the front of the doubly linked list.
// Test case: Insert 10, 20, 30 at front → Expected list: 30 ⇄ 20 ⇄ 10.

#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* prev;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
        prev = NULL;
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

    // Print ll function
    void print_ll(){
        Node* temp = head;
        while (temp != NULL){
            cout << temp->data << " ⇄ ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

};

int main(){
    linkedList ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);

    ll.print_ll();

    return 0;
}