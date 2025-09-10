//  Sum of all array elements

#include<iostream>
using namespace std;

int sumEl(int arr[], int n){
    int sum = 0;

    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = sumEl(arr, n);

    cout << "The sum of all elements of the array is = " << result << endl;

    return 0;
}