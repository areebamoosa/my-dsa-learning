// Task: Implement a Circular Queue using a Fixed-Size Array

// Your circular queue should support the following operations:
// Enqueue → Insert an element at the rear of the queue (wrap around if needed, but only if not full).
// Dequeue → Remove an element from the front of the queue (wrap around if needed, but only if not empty).
// Peek/Front → Display the element at the front without removing it.
// Last Element → Display the element at the rear without removing it.
// isEmpty → Check if the queue is empty.
// isFull → Check if the queue is full.
// Clear → Reset the queue to empty.
// Display → Print all elements in the queue in correct order.

#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int size;
    int front;
    int rear;

    public:

    Queue(int s){
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Enqueue
    void enqueue(int x){
        if (isFull()){
            cout << "Queue Overflow" << endl;
            return;
        }

        if (front == -1){
            front = 0;
        }

        rear = (rear + 1) % size;
        arr[rear] = x;
        cout << "Enqueued: " << x << endl;
    }

    // Dequeue
    int dequeue(){

        if (isEmpty()){
            cout << "Queue is empty" << endl;
            return -1;
        }

        int val = arr[front];

        cout << "Dequeued: " << val << endl;

        if (front == rear){
            front = rear = -1;
        } else{
            front = (front + 1) % size;
        }
        return val;
    }

    // Front element
    int firstEl(){
        if (isEmpty()){
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    // Rear element
    int lastEl(){
        if (isEmpty()){
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[rear];
    }

    // Print
    void print(){
        if (isEmpty()){
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";

        int i = front;
        while ( i != rear){
            cout << arr[i] << " ";
            i = (i + 1) % size;
        }

        cout << arr[rear] << endl;

    }

    bool isFull(){
        return (front == (rear + 1) % size);
    }

    bool isEmpty(){
        return front == -1;
    }

    void clear(){
        front = -1;
        rear = -1;
        cout << "Queue cleared" << endl;
    }

};

int main(){

    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    
    q.print();

    q.dequeue();

    q.print();

    cout << "Front element: " << q.firstEl() << endl;
    cout << "Rear element: " << q.lastEl() << endl;

    q.clear();
    q.print();

    return 0;
}