// Search an element in an array

#include <iostream>
using namespace std;

int searchEl(int arr[], int n, int target){

    for (int i = 0; i < n; i++){

        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int result = searchEl(arr, n, target);

    if (result != -1){
        cout << "Target value found at index = " << result << endl;
    } else{
        cout << "Target value not found in the array" << endl;
    }

    return 0;
}