// Q2 : You are given a sorted array with duplicates:[1, 2, 4, 4, 4, 5, 6, 7]
// Using iterative binary search, find the first occurrence of the element 4. If it does not exist, return -1.

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int st = 0;
    int end = size - 1;
    int ans = -1;

    while ( st <= end){
        int mid = st + (end - st) / 2;

        if (arr[mid] == target){
             ans = mid;
             end = mid - 1;
        } else if ( arr[mid] > target){
            end = mid - 1;
        } else if (arr[mid] < target){
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {1,2,4,4,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int result = binarySearch(arr, size, target);

    if(result != -1){
        cout << "The index of the target repeated element that occurs first in the array is : " << result << endl;
    } else {
        cout << "The target value not found in the array" << endl;
    }


    return 0;
}