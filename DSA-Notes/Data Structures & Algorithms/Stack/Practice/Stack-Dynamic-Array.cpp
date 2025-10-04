// Write a program to implement a stack using a dynamic array with these operations:

// Push → Insert an element into the stack.
// Pop → Remove the top element from the stack.
// Peek → Display the top element of the stack without removing it.
// isEmpty → Check if the stack is empty.
// isFull → Check if the stack is full.
// Display → Print all elements in the stack.

#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int capacity;
    int topIdx;

    public:

    Stack(int cap){
        capacity = cap;
        arr = new int [capacity];
        topIdx = -1;
    }

    // Push
    void push(int x){
        if (topIdx == capacity - 1){
            cout << "Stack overflow, unable to push" << endl;
            return;
        }
        arr[++topIdx] = x;
    }

    // Pop
    int pop(){
        if (topIdx == -1){
            cout << "Stack underflow, no element can be popped" << endl;
            return -1;
        }
        int topValue = arr[topIdx--];
        return topValue;
    }

    // Peek
    int peek(){
        if ( topIdx == -1){
            cout << "Stack is empty" << endl;
            return -1;
        }

        return arr[topIdx];
    }

    // isEmpty
    bool isEmpty(){
        return topIdx == -1;
    }

    // isFull
    bool isFull(){
        return topIdx == capacity - 1;
    }

    // isClear
    void clear(){
        topIdx = -1;
        cout << "Stack cleared" << endl;
    }

    // Printing elements of stack
    void print(){

        if ( topIdx == -1){
            cout << "Stack is empty" << endl;
            return;
        }

        for ( int i = topIdx; i >=0; i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){

    Stack s(5);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.print();

    cout << "Popped : " << s.pop() << endl;
    
    cout << "Top Element : " << s.peek() << endl;

    s.clear();
    s.print();

    return 0;
}