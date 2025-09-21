// Search by Value
// Check if a given value exists in the list. Return index.
// Example: Search 20 in 10 ⇄ 20 ⇄ 30.

#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* prev;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
        prev = NULL;
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

    // Searching value function
    bool search_val(int val){
        Node* temp = head;
        int idx = 0;

        while(temp!= NULL){
            if (temp->data == val){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;

    }
    // Print ll function
    void print_ll(){
        Node* temp = head;
        while (temp != NULL){
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

    int result = ll.search_val(20);

    if ( result != -1){
        cout << "The target value found at index : " << result << endl;
    } else {
        cout << "The target value does not exist in the linkedlist" << endl;
    }

    return 0;
}