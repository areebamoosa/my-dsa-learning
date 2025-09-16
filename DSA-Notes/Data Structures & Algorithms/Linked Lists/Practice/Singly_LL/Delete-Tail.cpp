// Delete at Tail
// Task: You have a linked list: 1 → 2 → 3 → 4 → 5
// Delete the last node (tail).
// Expected Output:
// 1 → 2 → 3 → 4 → NULL

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

    // Push back function
    void push_back(int data){
        Node* newNode = new Node(data);

        if (head == NULL){
            head = tail = newNode;
        }
        tail->next = newNode;
        tail = newNode;
    }

    // Deletion of tail function
    void delete_tail(){
        if (head == NULL){
            return;
        }
        if ( head == tail ){
            delete head;
            head = tail = NULL;
        }
        Node* temp = head;
        Node* prev = NULL;
        while ( temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        delete temp;
    }

    // Print ll function
    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

};

int main(){

    linkedList ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    cout << "Before deletion of tail the linkedlist is : " << endl;
    ll.print();

    cout << "After deletion of tail the new linkedlist is : " << endl;
    ll.delete_tail();
    ll.print();

    return 0;
}