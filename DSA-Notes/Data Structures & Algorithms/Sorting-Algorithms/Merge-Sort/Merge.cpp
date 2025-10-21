// Merge Sort Algorithm

#include<iostream>
#include<vector>
using namespace std;

// To combine two already sorted halves of the array into one single sorted array
void merge(vector<int>& arr, int st, int mid, int end){
    vector<int> temp;
    int i = st;
    int j = mid + 1;

    // st: starting index of the left half
    // mid: ending index of the left half
    // end: ending index of the right half
    // i starts at the left half’s first element (st)
    // j starts at the right half’s first element (mid + 1)
    // temp is a temporary array to store merged values

    // While both halves still have elements, compare elements
    while ( i <= mid && j <= end){
        if ( arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        } else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Copy the remaining elements if one side runs out
    while ( i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    while ( j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    // Copying  the sorted elements to original array
    for (int idx = 0; idx < temp.size(); idx++){
        arr[idx + st] = temp[idx];
        // st = 0 => arr[0+0] =  temp[0] 
    }

}

void mergeSort(vector<int>& arr, int st, int end){
    if( st < end){
        
        int mid = st + (end - st) / 2;

        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, st, mid, end);
    }
}

int main(){

    vector<int> arr = {38, 27, 43, 10};

    int n = arr.size();

    mergeSort(arr, 0, n-1);

    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}