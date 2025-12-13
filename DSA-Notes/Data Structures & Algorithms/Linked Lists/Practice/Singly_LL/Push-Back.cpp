// Push back / Insert at end

// Task : Create a function that inserts a new node at the end of a singly linked list. 
// Insert the values 10, 20, 30 one by one using this function, then print the list.

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

class linkedList{
    Node* head;

    public:

    linkedList(){
        head  = NULL;
    }

    // Push back function
    void push_back(int data){
        Node *newNode = new Node(data);

        if (head == NULL){
            head  = newNode;
            return;
        } else {

        Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;

            
            
            
        }
    }

    // Printing ll
    void printLL(){
        Node *temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){

    linkedList ll;
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);

    ll.printLL();

    return 0;
}