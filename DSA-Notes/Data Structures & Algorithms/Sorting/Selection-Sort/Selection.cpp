#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        // Assuming the cur position holds the minimum element
        int smallestIdx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestIdx])
            {
                smallestIdx = j;
            }
        }
        
        // Moving min element to it's correct position, the start of array.
        swap(arr[i], arr[smallestIdx]);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}