// Task : Write a function to print fibonacci series.

#include<iostream>
using namespace std;

int fib(int n){

    if ( n == 0 || n == 1){
        return n;
    }
    return fib(n - 1) + fib ( n - 2);
}

int main(){

    int n = 7;
    fib(n);

    cout << "Fibonacci series up to " << n << " terms: ";
    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;
    return 0;
}