// Q : You are given a sorted array: [2, 4, 6, 8, 10, 12, 14]
// Using iterative binary search, find the index of the element 10. If it does not exist, return -1.

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int st = 0;
    int end = size - 1;

    while(st <= end){
        int mid = st + (end - st) / 2;

        if ( arr[mid]  == target){
            return mid;
        } else if ( arr[mid] > target){
            end = mid - 1;
        } else if (arr[mid] < target){
            st = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,4,6,8,10,12,14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, size, target);

    if(result != -1){
        cout << "The index of the target element is : " << result << endl;
    } else {
        cout << "The target value not found in the array" << endl;
    }

    return 0;
}