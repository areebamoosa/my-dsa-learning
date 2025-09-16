// Push front / Insert at beginning

// Task : Create a function that inserts a new node at the beginning of a singly linked list.
// Insert the values 10, 20, 30 one by one using this function, then print the list.

#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

class linkedList{

    Node *head;
    Node *tail;

    public:

    linkedList(){
        head = tail = NULL;
    }

    // Push Front function
    void push_front(int data){
        Node *newNode = new Node(data);

        if (head == NULL){
            head = tail = newNode;
            return;
        } else {
        newNode->next = head;
        head = newNode;
        }

    }

    // Printing Linkedlist
    void printLL(){
        Node* temp = head;

        while (temp != NULL){
            cout << temp -> data << " -> ";
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

    ll.printLL();

    return 0;
}