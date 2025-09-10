# Arrays

An array in C++ is a collection of fixed-size elements of the same data type, stored in contiguous memory locations.

It allows you to store multiple values under a single variable name, and you can access each value using an index starting from 0.

Arrays are one of the most basic and commonly used data structures in C++ programming

## Syntax

```cpp
int marks [5] = {98,95,90,92,99};

//We can also initialize an array without specifying the size of the array.

int price [] = {9,5,10,2,19}; // Automatically the system makes the size of the array as 5
```

##### To access a specific value of an array :

```cpp
marks[1]; // this will give the value at position 1
```

##### To change a specific value of an array :

```cpp
marks[1] = 80 // this will change the value at position 1 and now store it as 80
```

### Size of array

We can calculate the size of an array like this :

```cpp
cout << sizeof(marks) / sizeof(int) << endl;
// 20 bytes / 4 = 5
```

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    // declaring and initializing an array of size 5
    int arr[5] = {2, 4, 8, 12, 16};

    // printing array elements
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

## Traverse Array

Traversing means visiting each element one by one.

Traverse an array means going through each element of the array one by one in order to access, print, check, or modify them.

```cpp
#include <iostream>
using namespace std;

int main() {
   int arr[5] = {2, 4, 8, 12, 16};

   // Traversing and printing arr
   for (int i = 0; i < 5; i++)
       cout << arr[i] << " ";

   return 0;
}
```

**Traverse** = Visit every element, usually using a loop.

## Size of Array

The size of the array refers to the number of elements that can be stored in the array.

The array does not contain the information about its size but we can extract the size using sizeof() operator.

```cpp
#include <iostream>
using namespace std;

int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'f'};

    // Size of one element of an array
    cout << "Size of arr[0]: " << sizeof(arr[0])
    << endl;

    // Size of  'arr'
    cout << "Size of arr: " << sizeof(arr) << endl;

    // Length of an array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Length of an array: " << n << endl;

    return 0;
}
```

## Pass Array to Function

Arrays are passed to functions using pointers, as the array name decays to a pointer to the first element. So, we also need to pass the size of the array to the function.

```cpp
#include <iostream>
using namespace std;

// Function that takes array as argument
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[] = {2, 4, 8, 12, 16};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Passing array
    printArray(arr, n);
    return 0;
}
```

## Properties of Arrays

- An array is a collection of data of the same data type, stored at a contiguous memory location.
- Indexing of an array starts from 0. It means the first element is stored at the 0th index, the second at 1st, and so on.

- Elements of an array can be accessed using their indices.
- Once an array is declared its size remains constant throughout the program.
- An array can have multiple dimensions.
- The size of the array in bytes can be determined by the sizeof operator using which we can also find the number of elements in the array.
- We can find the size of the type of elements stored in an array by subtracting adjacent addresses
