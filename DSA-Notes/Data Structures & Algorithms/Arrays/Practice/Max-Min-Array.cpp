// Find the Maximum and Minimum in an array

#include<iostream>
using namespace std;

int main() {
    int arr[8] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    //Largest in an array

    int largest = INT_MIN;
    

    for(int i=0; i <n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }

    }

    cout << "The largest value in the array is : " << largest << endl;

    // Smallest in an array

    int smallest = INT_MAX;

    for (int i = 0; i < n ; i++){
        if ( arr[i] < smallest){
            smallest = arr[i];
        }
    }

    cout << "The smallest value in the array is : " << smallest << endl;

    return 0;
}