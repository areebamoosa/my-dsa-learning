# Vectors

Vectors are array like.

They are dynamic in nature.

The major differece between them and arrays is that they don't have a fixed size & their size changes.

## Vector Syntax

```cpp
vector<int> vec;
```

```cpp
vector<int> vec = {1,2,3};
```

```cpp
vector<int> vec (3,0); // (Size of vector, Value at all indexes)
//Here the array will be like this : {0,0,0};
```

### Note :

We must include this header file of Vectors.

`#include<vector>`

We need to add this command in our terminal while runninng our vector code.

`g++ -std=c++11 code.cpp && ./a.out`

This basically tells the compiler that we are using C++'s 11th standard.
