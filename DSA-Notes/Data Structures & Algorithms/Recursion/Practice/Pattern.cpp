// Task : Write a recusrive function to print following problem
// 3 2 1 1 2 3 

#include<iostream>
using namespace std;

void printPattern(int n){

    if ( n == 0){
        return;
    }
    cout << n << " ";
    printPattern( n - 1);
    cout << n << " ";
}

int main(){

    int n = 3;
    printPattern(3);
    
    return 0;
}