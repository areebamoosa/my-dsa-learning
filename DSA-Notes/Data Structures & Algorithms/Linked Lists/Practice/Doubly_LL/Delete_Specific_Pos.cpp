// Delete at Position
// Remove the node at a specific position.
// Example: 10 ⇄ 20 ⇄ 30 ⇄ 40 → delete at pos 2 → 10 ⇄ 20 ⇄ 40.

#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* prev;
    Node* next;

    Node(int d){
        data = d;
        prev = next = NULL;
    }
};

class linkedList{
    Node* head;
    Node* tail;

    public:

    linkedList(){
        head = tail = NULL;
    }

    //Push front function
    void push_front(int data){
        Node* newNode = new Node(data);
        if ( head == NULL){
            head = tail = newNode;
            return;
        } else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        }
    }

    // Delete at specific position function
    void delete_val(int pos){
        if (pos < 0){
            cout << "Invalid position" << endl;
        }
        if (head == NULL){
            cout << "The linkedlist is  empty, so no node can be deleted" << endl;
            return;
        }
        if (pos == 0){
            Node* temp = head;
            head = temp->next;
            head->prev = NULL;
            temp->next = NULL;
            delete temp;
            return;
        }
        
        Node* temp = head;

        for (int i=0; i < pos-1 && temp != NULL; i++){
            temp = temp->next;
        }

        Node* delNode = temp->next;
        temp->next = delNode->next;

        if (delNode->next != NULL) {
            delNode->next->prev = temp;
        } else {
            // if the node we are deleting is tail so we update the temp as tail & then delete the node
            tail = temp;
        }
        delete delNode;
    }

    // Print ll function
    void print_ll(){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->data << " ⇄ ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    linkedList ll;
    ll.push_front(40);
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);

    cout << "The original linkedlist is : " << endl;
    ll.print_ll();


    cout << "After deleting the value at position 2, the linkedlist is : " << endl;
    ll.delete_val(2);

    ll.print_ll();
    
    return 0;
}