// Heap - HeapifyDown : Deletion of Node in a tree

#include<iostream>
using namespace std;

void HeapifyDown(int arr[], int n, int i){
    int largest = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    // If leftchild exists & is greater than largest
    if (leftChild < n && arr[leftChild] > arr[largest]){
        largest = leftChild;
    }

    // If rightchild exists & is greater than largest
    if (rightChild < n && arr[rightChild] > arr[largest]){
        largest = rightChild;
    }

    if ( largest != i){
        swap(arr[i], arr[largest]);
        HeapifyDown(arr,n,largest);
    }
}

void deleteRoot(int arr[], int& n){
    
    if ( n <= 0){
        cout << "Heap is empty" << endl;
        return;
    }

    // When we delete the root of a Max Heap: Root is at index 0, We replace it with the last element.
    arr[0] = arr[n - 1]; // Move last element to root
    n = n - 1; // Reducing heap size

    HeapifyDown(arr,n,0);
}

void printArray(int arr[], int n){
    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[10] = {15, 5, 10, 2, 4, 3};
    int n = 6;

    cout << "Original Heap: ";
    printArray(arr, n);

    deleteRoot(arr, n);

    cout << "Heap after deleting root: ";
    printArray(arr, n);

    return 0;
}