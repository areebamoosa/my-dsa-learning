// Task: Implement a Deque using a Fixed-Size Array

// InsertFront → Insert an element at the front of the deque.
// InsertRear → Insert an element at the rear of the deque.
// DeleteFront → Remove an element from the front.
// DeleteRear → Remove an element from the rear.
// GetFront → Display the element at the front without removing it.
// GetRear → Display the element at the rear without removing it.
// isEmpty → Check if the deque is empty.
// isFull → Check if the deque is full.
// Display → Print all elements from front to rear.
// Clear → Reset the deque to empty.

#include<iostream>
using namespace std;

class Dequeue{
    int *arr;
    int size;
    int front;
    int rear;

    public:

    Dequeue(int s){
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Insert at Front
    void insertFront(int x) {
        if (isFull()) {
            cout << "Deque Overflow!" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            front = (front - 1 + size) % size;
        }
        arr[front] = x;
        cout << "Inserted at front: " << x << endl;
    }

    // Insert at Rear
    void insertRear(int x) {
        if (isFull()) {
            cout << "Deque Overflow!" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = x;
        cout << "Inserted at rear: " << x << endl;
    }

    // Delete from Front
    void deleteFront() {
        if (isEmpty()) {
            cout << "Deque Underflow!" << endl;
            return;
        }
        cout << "Deleted from front: " << arr[front] << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    // Delete from Rear
    void deleteRear() {
        if (isEmpty()) {
            cout << "Deque Underflow!" << endl;
            return;
        }
        cout << "Deleted from rear: " << arr[rear] << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            rear = (rear - 1 + size) % size;
        }
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

    void clear(){
        front = rear = -1;
    }

    bool isEmpty(){
        return front == -1;
    }

    bool isFull(){
        // The queue is full if moving one step ahead from rear brings you to front.
        return (front == (rear + 1) % size);
    }

};

int main(){

    Dequeue dq(5);

    dq.insertFront(5);
    dq.insertFront(2);
    dq.insertRear(10);
    dq.insertRear(20);

    dq.print();

    dq.deleteFront();
    dq.deleteRear();

    dq.print();

    return 0;
}