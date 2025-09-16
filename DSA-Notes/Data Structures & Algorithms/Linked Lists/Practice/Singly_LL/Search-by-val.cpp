// Search by Value 
// Task: You have a singly linked list:
// 5 → 10 → 15 → 20 → 25 → NULL

// Search by Value: Check if the value 15 exists in the list.

// Expected output:
// Value 15 → found 

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

    // Search by value function
    void search_value(int key){
        Node* temp = head;
        int pos = 0;

        while (temp != NULL){
            if (temp->data == key){
                cout << "Value : " << key << " found at position : " << pos << endl;
                return;
            }
            temp = temp->next;
            pos++;
        }
        cout << "Value : " << key << " not found in the linkedlist" << endl;
    }

};

int main(){

    linkedList ll;

    ll.push_back(5);
    ll.push_back(10);
    ll.push_back(15);
    ll.push_back(20);
    ll.push_back(25);

    ll.search_value(15);

    return 0;
}