// Insert at Tail / Push Back
// Insert a node at the end of the list.
// Example: Insert 5, 15, 25 at back → Expected: 5 → 15 → 25 → (back to 5).

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

    // Push Back function
    void push_back(int data){
        Node* newNode = new Node(data);

        if(head == NULL){
            head = tail = newNode;
            newNode->next = newNode;
        } else {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Print ll function
    void print_ll(){
        Node* temp = head;
        do{
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << "(back to " << head->data << " )" << endl;
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