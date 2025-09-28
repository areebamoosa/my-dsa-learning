// Implementation of stack using linkedlist

#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Stack{
    list<int> ll;

    public:

    // Push function
    void push(int val){
        ll.push_front(val);
    }

    // Pop function
    void pop(){
        ll.pop_front();
    }

    // Top function
    int top(){
        return ll.front();
    }

    bool empty(){
        return ll.size() == 0;
    }
};

int main(){

    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}