// Delete Head
// Delete the first node.
// Example: 10 → 20 → 30 → (back to 10) → delete head → 20 → 30 → (back to 20)

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

    // Delete at head function
    void delete_head() {
    // Case 1: List is empty
    if (head == NULL)
        return;

    // Case 2: Only one node
    if (head->next == head) {
        delete head;
        head = NULL;
        return;
    }

    // Case 3: More than one node
    Node* temp = head;

    Node* last = head;
    while (last->next != head) {
        last = last->next;
    }

    last->next = head->next;

    head = head->next;

    delete temp;
}


    // Push front function
    void push_front(int data){
        Node* newNode = new Node(data);
        if (head == NULL){
            head = tail = newNode;
            newNode->next = newNode;
        } else {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    // Print ll function
    void print_ll(){
        Node* temp = head;

        do{
            cout << temp->data << " -> ";
            temp = temp->next;
        } while(temp != head);

        cout << "(back to " << head->data << " )" << endl;
    }

};

int main(){
    linkedList ll;
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);

    cout << "Original linked list : " << endl;
    ll.print_ll();

    cout << "After deleting head node, the linkedlist is : " << endl;
    ll.delete_head();
    ll.print_ll();

    return 0;
}