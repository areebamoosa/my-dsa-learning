# Linear Search Algorithm

In Linear Search, we iterate over all the elements of the array and check if it the current element is equal to the target element.

If we find any element to be equal to the target element, then return the index of the current element. Otherwise, if no element is equal to the target element, then return -1 as the element is not found.

Linear search is also known as sequential search.
It is basically search for an element sequentially.

## Time and Space Complexity of Linear Search Algorithm:

### Time Complexity:

**Best Case:** In the best case, the key might be present at the first index. So the best case complexity is O(1)

**Worst Case:** In the worst case, the key might be present at the last index i.e., opposite to the end from which the search has started in the list. So the worst-case complexity is O(N) where N is the size of the list.

**Average Case:** O(N)

## Applications of Linear Search Algorithm:

**Unsorted lists:** Works well for finding elements in unsorted arrays/lists.

**Small data sets:** Better than binary search when data is small.

**Linked lists:** Used to search nodes one by one.

**Easy to implement:** Very simple to code and understand.

## Advantages of Linear Search Algorithm:

- Linear search can be used irrespective of whether the array is sorted or not. It can be used on arrays of any data type.

- Does not require any additional memory.

- It is a well-suited algorithm for small datasets.

## Disadvantages of Linear Search Algorithm:

- Linear search has a time complexity of O(N), which in turn makes it slow for large datasets.

- Not suitable for large arrays.

## When to use Linear Search Algorithm?

- When we are dealing with a small dataset.

- When you are searching for a dataset stored in contiguous memory.
