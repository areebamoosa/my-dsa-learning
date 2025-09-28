// Implementation of stack using vector

#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> v;

    public:

    // Push function
    void push(int val){
        v.push_back(val);
    }

    // Pop function
    void pop(){
        v.pop_back();
    }

    // Top function
    int top(){
        return v[v.size()-1];
    }

    bool empty(){
        return v.size() == 0;
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