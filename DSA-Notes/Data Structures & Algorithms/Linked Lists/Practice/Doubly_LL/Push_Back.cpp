// Doubly Linkedlist : Push Back
// Write a function to insert a node at the end of the doubly linked list.
// Test case: Insert 5, 15, 25 at back → Expected list: 5 ⇄ 15 ⇄ 25.

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

    // Push back function
    void push_back(int data){
        Node* newNode = new Node(data);
        if (head == NULL){
            head = tail = newNode;
            return;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Print ll function
    void print_ll(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ⇄ ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

};

int main(){
    linkedList ll;
    ll.push_back(5);
    ll.push_back(15);
    ll.push_back(25);

    ll.print_ll();

    return 0;
}