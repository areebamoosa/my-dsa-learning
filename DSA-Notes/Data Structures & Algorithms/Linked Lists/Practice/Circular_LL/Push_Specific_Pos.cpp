// Insert at Position
// Insert at a given position.
// Example: Start with 10 → 20 → 30 → (back to 10), insert 15 at pos 1 → 10 → 15 → 20 → 30 → (back to 10).

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

    // Insert at Specific position
    void insert_pos(int data, int pos){
        Node* newNode = new Node(data);
        Node* temp = head;
        if (head == NULL){
            head = tail = newNode;
            newNode->next = newNode;
        } else {
            if ( pos < 0){
                cout << "Invalid position" << endl;
                return;
            }

            if ( pos == 0){
                if ( head == NULL){
                    head = tail = newNode;
                    newNode->next = newNode;
                } else {
                    newNode->next = head;
                    tail->next = newNode;
                    head = newNode;
                }
            }
            if (pos > 0){
            for (int i=0; i < pos-1; i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            }
        }
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

    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);

    cout << "Original linked list : " << endl;

    ll.print_ll();


    cout << "After insertion of 15 at position 1, the linkedlist is : " << endl;
    ll.insert_pos(15,1);
    ll.print_ll();

    return 0;
}