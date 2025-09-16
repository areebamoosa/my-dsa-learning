// Delete at Specific Position
// Task: You have a linked list: 100 → 200 → 300 → 400 → 500
// Delete the node at position 2 (0-based indexing).
// Expected Output:
// 100 → 200 → 400 → 500 → NULL

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

    // Delete at a specific position
    void delete_pos(int pos){

        if (pos < 0){
            return;
        }

        if (pos == 0){

            Node* temp = head;

            if (head == NULL){
                tail = NULL;
            }
            delete temp;

            head = tail = NULL;
        }

        Node* temp = head;
        Node* prev = NULL;

        for(int i = 0; i<pos && temp!= NULL; i++){
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete temp;

        if (temp == NULL){
            cout << "Position out of range" << endl;
        }
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

    ll.push_back(100);
    ll.push_back(200);
    ll.push_back(300);
    ll.push_back(400);
    ll.push_back(500);

    cout << "Before deletion of head the linkedlist is : " << endl;
    ll.print();

    cout << "After deletion of head the new linkedlist is : " << endl;
    ll.delete_pos(2);

    ll.print();
    
    return 0;
}