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

## Vector using C++ STL Library

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec; // Size of this initially will be 0 since we didn't applied any size to it.

    cout << vec.size() << endl;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    // To initialize a vector with values

    vector<int> elements = {1, 2, 3, 4, 5};

    // To initialize a vector with the values of another vector

    vector<int> vec1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    vector<int> vec2(vec1);

    for (int val : vec2)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
```
