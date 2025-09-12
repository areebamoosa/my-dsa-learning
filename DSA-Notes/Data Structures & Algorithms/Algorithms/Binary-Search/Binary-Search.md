# Binary Search Algorithm

Binary Search is a searching algorithm that operates on a sorted or monotonic search space, repeatedly dividing it into halves to find a target value or optimal answer in logarithmic time O(log N).

To apply Binary Search algorithm:

- The data structure must be sorted.

---

#### Below is the step-by-step algorithm for Binary Search:

- Divide the search space into two halves by finding the middle index "mid".

- Compare the middle element of the search space with the key.

- If the key is found at middle element, the process is terminated.

- If the key is not found at middle element, choose which half will be used as the next search space.

  -> If the key is smaller than the middle element, then the left side is used for next search.

  -> If the key is larger than the middle element, then the right side is used for next search.

- This process is continued until the key is found or the total search space is exhausted.

### The Binary Search Algorithm can be implemented in the following two ways

1. Iterative Binary Search Algorithm

2. Recursive Binary Search Algorithm

## Iterative Binary Search Algorithm

**O(log n) Time and O(1) Space**

```cpp
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int x) {
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

int main() {
    vector<int> arr = { 2, 3, 4, 10, 40 };
    int x = 10;
    int result = binarySearch(arr, x);
    if(result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index " << result;
    return 0;
}
```

## Recursive Binary Search Algorithm:

Create a recursive function and compare the mid of the search space with the key. And based on the result either return the index where the key is found or call the recursive function for the next search space.

```cpp
#include <iostream>
#include <vector>
using namespace std;

// A recursive binary search function. It returns
// location of x in given array arr[low..high] is present,
// otherwise -1
int binarySearch(vector<int> &arr, int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, high, x);
    }
  return -1;
}

int main() {
    vector<int> arr = { 2, 3, 4, 10, 40 };
    int query = 10;
    int n = arr.size();
    int result = binarySearch(arr, 0, n - 1, query);
    if (result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index " << result;
    return 0;
}
```

#### Complexity Analysis of Binary Search Algorithm

**Time Complexity:**

-> **Best Case:** O(1)

-> **Average Case:** O(log N)

-> **Worst Case:** O(log N)

**Auxiliary Space:** O(1), If the recursive call stack is considered then the auxiliary space will be O(log N).
