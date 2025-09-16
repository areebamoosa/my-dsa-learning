// Insert at specific position
// Task : You have a linked list: 10 → 20 → 30 → 40
// Insert the value 25 at position 2 (0-based indexing).

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

    Node* head;
    Node* tail;

    public:

    linkedList(){
        head = tail = NULL;
    }

    // Push front function
    void push_front(int data){
    Node* newNode = new Node(data);
    if (head == NULL){
        head =  tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
    }
    // Push back function
    void push_back(int data){
        Node* newNode = new Node(data);
        if (head == NULL){
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }


    // Function to print a value at a specific position
    void insertPos(int pos, int data){

        if (pos < 0){
            return;
        }

        if (pos == 0){
            push_front(data);
            return;
        }

       Node* newNode = new Node(data);


        Node* temp = head;

        for(int i = 0; i< pos-1 && temp != NULL; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;

        if (temp == NULL){
            cout << "Position out of range" << endl;
        }
    }

    // Function to print LL 
    void printLL(){
        Node* temp = head;
        while ( temp!= NULL){
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
    ll.push_back(40);
    
    ll.insertPos(2, 25);

    ll.printLL();

    return 0;
}