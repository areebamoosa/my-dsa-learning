// Write a C++ program to search for a number in an array using Linear Search.
// Input: An array of 5 numbers → {5, 10, 15, 20, 25}
// Search key: 20
// Output: Should print "Element found at index 3"

#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for (int i=0; i< n; i++){
        if (arr[i] == target){
            return i;
        } 
    }
    return -1;
}

int main(){

    int arr[] = {5,10,15,20,25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 20;

    int result = linearSearch(arr,n,target);

    if (result != -1){
        cout << "Element found at index = " << result << endl;
    } else{
        cout << "Target element not found in the array" << endl;
    }

    return 0;
}