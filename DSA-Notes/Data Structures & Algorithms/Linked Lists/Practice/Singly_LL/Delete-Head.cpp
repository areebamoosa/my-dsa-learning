// Delete at Head
// Task: You have a linked list: 5 → 10 → 15 → 20
// Delete the head node.
// 10 → 15 → 20 → NULL

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

    // Delete at head function
    void delete_head(){

        if (head == NULL){
            return;
        }

        Node* temp = head;
        head = temp->next;
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

    ll.push_back(5);
    ll.push_back(10);
    ll.push_back(15);

    cout << "Before deletion of head the linkedlist is : " << endl;
    ll.print();

    cout << "After deletion of head the new linkedlist is : " << endl;
    ll.delete_head();
    ll.print();

    return 0;
}