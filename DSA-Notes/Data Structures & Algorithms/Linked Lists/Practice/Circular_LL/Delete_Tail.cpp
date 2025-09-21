// Delete Tail
// Delete the last node.
// Example: 10 → 20 → 30 → (back to 10) → delete tail → 10 → 20 → (back to 10).

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

    // Delete at tail function
    void delete_tail(){

        if (head == NULL){
            cout << "Linkedlist is empty" << endl;
            return;
        }

        if ( head == tail){
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;

        while ( temp->next != tail ){
            temp = temp->next;
        }

        temp->next = tail->next;
        delete tail;
        tail = temp;

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
        if (head == NULL){
        cout << "List is empty!" << endl;
        return;
        }
    
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

    cout << "After deleting the tail node, the linkedlist is : " << endl;
    ll.delete_tail();
    ll.print_ll();

    return 0;
}