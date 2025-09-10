// To input values of an array from a user

#include<iostream>
using namespace std;

int main () {

    cout << "Please enter marks of your 5 courses \n" << endl;

    int size = 5;
    int marks[size];

    for(int i = 0; i < size; i++){
        cout << "Marks of course \n" ;
        cin >> marks[i];
    }

    // Showing marks of all courses.

    for (int i = 0; i < size ; i++){
        cout << "Marks of course " << i << " are = " << marks[i] << "\n";
    }
    cout << endl;

    return 0;
}