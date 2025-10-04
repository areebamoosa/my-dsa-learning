// Task: Write a program to implement a Queue using a Linked List. Your queue should support the following operations:
// Enqueue → Insert an element at the rear of the queue.
// Dequeue → Remove an element from the front of the queue.
// Peek/Front → Display the element at the front without removing it.
// Last El → Display rear element.
// isEmpty → Check if the queue is empty.
// Display → Print all elements in the queue.
// Clear - clear the ll.

#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int d){
        data = d;
        next = nullptr;
    }
};

class Queue{
    Node* front;
    Node* rear;

    public:

    Queue(){
        front = rear = nullptr;
    }

    // Enqueue : insert at rear
    void enqueue(int data){
        Node* newNode = new Node(data);
        if ( front == nullptr){
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    // Dequeue : Remove element from front of queue
    void dequeue(){
        if ( front == nullptr ){
            cout << "LL is empty" << endl;
            return;
        }

        Node* temp = front;
        front = temp->next;
        delete temp;

        if (front == nullptr){
            rear = nullptr;
        }
    }

    // First element
    int firstEl(){

        if ( front == nullptr ){
            cout << "LL is empty" << endl;
            return -1;
        }

        return front->data; 
    }

    // Last Element
    int lastEl(){

        if ( front ==  nullptr ){
        cout << "LL is empty" << endl;
        return -1;
        }
        return rear->data;
    }

    // Empty
    bool isEmpty(){
        return front == nullptr;
    }

    // Clear ll
    void clear(){
        while (front != nullptr){
            Node* temp = front;
            front = front->next;
            delete temp;
        }
        rear =  nullptr;
    }

    // Display
    void print(){

        if ( front ==  nullptr ){
        cout << "LL is empty" << endl;
        return;
        }

        Node* temp = front;

        while(temp != nullptr){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

};

int main(){

    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    q.print();


    q.dequeue();

    q.print();

    cout << "Front: " << q.firstEl() << endl;
    cout << "Rear: " << q.lastEl() << endl;

    q.clear();
    q.print();

    return 0;
}