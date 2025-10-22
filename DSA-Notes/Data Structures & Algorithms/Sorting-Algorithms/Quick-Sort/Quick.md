# Quick Sort Algorithm

QuickSort is a comparison-based sorting algorithm that uses the divide-and-conquer approach to sort an array or list of elements. 

It can be implemented using two functions:

- **partition():** It is the key process in the quicksort algorithm. It involves selecting a pivot element and rearranging the array so that all elements smaller than the pivot are placed to its left, and the elements greater than the pivot are placed to its right. The point where the pivot is placed is called the partitioning index and it is returned to its caller quickSort().

- **quickSort():** It is the main recursive function that implements the divide-and-conquer strategy. It divides the given array into two subarrays based on the partitioning index returned by partition() function. Then it keeps calling itself for these two subarrays until the whole array is sorted.
