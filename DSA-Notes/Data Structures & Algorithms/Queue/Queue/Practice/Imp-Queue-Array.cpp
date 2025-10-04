// Task: Write a program to implement a Queue using a fixed-size array. Your queue should support the following operations:

// Enqueue → Insert an element at the rear of the queue (if not full).
// Dequeue → Remove an element from the front of the queue (if not empty).
// Peek/Front → Display the element at the front without removing it.
// Last Element → Display the element at the rear without removing it.
// isEmpty → Check if the queue is empty.
// isFull → Check if the queue is full.
// Display → Print all elements in the queue.
// Clear → Remove all elements from the queue.

#include<iostream>
using namespace std;

class Queue{

    int* arr;
    int size;
    int front;
    int rear;

    public:

    Queue(int s){
        size = s;
        arr = new int[size];
        front = 0;
        rear = -1;
    }

    // Enqueue
    void enqueue(int x){

        if (isFull()){
            cout << "Queue overflow" << endl;
            return;
        }

        arr[++rear] = x;
    }

    // Dequeue
    void dequeue(){

        if (isEmpty()){
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Dequeued : " << arr[front] << endl;
        front++;
    }

    // Front element
    int firstEl(){
        if (isEmpty()){
            cout << "Queue is empty" << endl;
            return;
        }
        return arr[front];
    }

    // Rear element
    int lastEl(){
        if (isEmpty()){
            cout << "Queue is empty" << endl;
            return;
        }
        return arr[rear];
    }

    // Clear 
    void clear(){
        front = 0;
        rear = -1;
    }

    // Print
    void print(){

        if (isEmpty()){
            cout << "Queue is empty" << endl;
            return;
        }

        for ( int i = front; i <= rear; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    bool isFull(){
        return rear == size - 1;
    }

    bool isEmpty(){
        return front > rear;
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

    return 0;
}