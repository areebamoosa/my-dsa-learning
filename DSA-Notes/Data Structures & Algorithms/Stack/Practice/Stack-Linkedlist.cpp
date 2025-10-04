// Write a program to implement a stack using a singly linked list with the following operations:

// Push → Insert an element at the top of the stack (head of the list).
// Pop → Remove the top element from the stack.
// Peek → Display the top element without removing it.
// isEmpty → Check if the stack is empty.
// Clear → Delete all elements of the stack.
// Display → Print all elements in the stack.

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

class myStack{
    Node* top;

    public:

    myStack(){
        top = nullptr;
    }

    // Push
    void push(int data){

        Node* temp = new Node(data);
        temp->next = top;
        top = temp;
    }

    // Pop
    int pop(){
        if ( top == nullptr){
            cout << "Stack is empty, no element can be popped" << endl;
            return -1;
        }

        Node* temp = top;
        top = temp->next;
        
        int val = temp->data;
        delete temp;

        return val;
    }

    // Peek
    int peek(){
        if (top == nullptr){
            cout << "Stack is empty" << endl;
            return -1;
        }

        Node* topVal = top;

        int val = topVal->data;
        return val;
    }

    // isEmpty
    bool isEmpty(){
        return top == nullptr;
    }

    // Clear 
    void clear(){
        while( top != nullptr){
                Node* temp = top;
                top = temp->next;
                delete temp;
        }
        cout << "Stack cleared" << endl;
    }

    // Print
    void print(){
        
        if (top == nullptr){
            cout << "Stack is empty" << endl;
        }

        Node* temp = top;

        while(temp != nullptr){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }

};

int main(){

    myStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    s.print();

    cout << "Popped Value : " << s.pop() << endl;

    cout << "Top Element : " << s.peek() << endl;

    s.clear();

    s.print();

    return 0;
}