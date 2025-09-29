// Task 2: Sum of Numbers
// Write a recursive function that finds the sum of the first n natural numbers.

#include<iostream>
using namespace std;

int sum(int n){
    if (n == 1){
        return 1;
    }
    return n + sum(n - 1);
}

int main(){
    int result = sum(10);
    cout << "Sum of n Numbers is : " << result << endl;

    return 0;
}