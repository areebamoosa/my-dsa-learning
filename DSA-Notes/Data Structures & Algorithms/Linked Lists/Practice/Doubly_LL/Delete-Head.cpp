// Delete Head / Pop Front
// Remove the first node.
// Example: 10 ⇄ 20 ⇄ 30 → delete head → 20 ⇄ 30.

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

    // Delete at head function
    void delete_head(){
        if (head == NULL){
            return;
        }
        if ( head->next == NULL){
            delete head;
            return;
        }
        Node* temp = head;

        head = temp->next;
        head->prev = NULL;
        temp->next = NULL;

        delete temp;
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
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);

    cout << "Before deleting head of linkedlist : " << endl;
    ll.print_ll();

    cout << "After deleting head of linkedlist : " << endl;
    ll.delete_head();
    ll.print_ll();
    
    return 0;
}