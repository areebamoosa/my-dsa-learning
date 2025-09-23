#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int d) {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

class OrderedDoublyLinkedList {
    Node* head;

public:
    OrderedDoublyLinkedList() {
        head = NULL;
    }

    // Function to insert in sorted order
    void insert(int val) {
        Node* newNode = new Node(val);

        // Case 1: Empty list
        if (head == NULL) {
            head = newNode;
            return;
        }

        // Case 2: Insert before head (val is smaller than head->data)
        if (val < head->data) {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            return;
        }

        // Case 3: Insert in the middle or end
        Node* temp = head;
        while (temp->next != NULL && temp->next->data < val) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }

        temp->next = newNode;
    }

    // Function to print the list
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    OrderedDoublyLinkedList dll;

    dll.insert(10);
    dll.insert(5);
    dll.insert(7);
    dll.insert(20);
    dll.insert(15);

    cout << "Ordered Doubly Linked List: ";
    dll.display();

    return 0;
}
