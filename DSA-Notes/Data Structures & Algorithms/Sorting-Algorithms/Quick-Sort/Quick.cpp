// Quick Sort Algorithm

#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int st, int end){
    int idx = st - 1;
    int pivot = arr[end];

    for (int j = st; j < end; j ++){
        if ( arr[j] <= pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quickSort(vector<int>& arr, int st, int end){
    if (st < end){
        int pivIdx = partition(arr, st, end);
        quickSort(arr, st, pivIdx - 1);
        quickSort(arr,pivIdx + 1, end);
    }
}

int main(){

    vector<int> arr = {5,2,6,4,1,3};
    int n = arr.size();

    quickSort(arr,0,n-1);

    for (int i = 0; i < n; i ++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}