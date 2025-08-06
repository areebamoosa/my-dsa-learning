# Arrays

An array in C++ is a collection of fixed-size elements of the same data type, stored in contiguous memory locations. It allows you to store multiple values under a single variable name, and you can access each value using an index starting from 0.

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
