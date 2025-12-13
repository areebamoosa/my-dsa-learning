// Insert at Head / Push Front)
// Insert a node at the beginning of the circular linked list.
// Example: Insert 10, 20, 30 at front → Expected: 30 → 20 → 10 → (back to 30).

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

    void push_front( int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != head) {
        temp = temp->next;
    }

    // Insert newNode at front
    newNode->next = head;
    temp->next = newNode;

    head = newNode;
}


    //Printing ll function
    void print_ll(){
        Node* temp = head;
        do{
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(back to " << head->data << ")" << endl;
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