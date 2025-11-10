// Heap - HeapifyUp : Insertion of Node in a tree

#include<iostream>
using namespace std;

void heapifyUp(int arr[], int i){

    int parent = ( i - 1) / 2;

    while (i >0 && arr[i] > arr[parent]){
        // If the inserted node is greater than the parent node, we swap them
            swap(arr[i], arr[parent]);
            i = parent;
            parent =  ( i - 1) / 2;
        }
    }


void insertNode(int arr[], int& n, int key){

    arr[n] = key;
    n = n + 1;
    heapifyUp(arr , n - 1);
}

void printArray(int arr[], int n){
    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr [] = {10,5,3,2,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 15;

    insertNode(arr, n, key);

    cout << "Heap after insertion: ";
    printArray(arr, n);

    return 0;
}