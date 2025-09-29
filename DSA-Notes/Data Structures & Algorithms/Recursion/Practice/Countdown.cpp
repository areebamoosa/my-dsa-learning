// Task 1: Countdown
// Write a recursive function that prints numbers from n down to 1.

#include<iostream>
using namespace std;

void countdown(int n){

    if (n == 0 ){   // Base case
        return;     // This base case stops the recursion when n reaches 0.
    }
    cout << n << " " << endl; // Recursive case
    countdown(n - 1);
}

int main(){
    countdown(10);
    return 0;
}