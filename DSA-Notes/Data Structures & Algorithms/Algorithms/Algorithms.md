# Algorithm

### Find The Lowest Value in an Array

An array is a data structure used to store multiple elements.

Arrays are used by many algorithms.

For example, an algorithm can be used to look through an array to find the lowest value.

Let's create our first algorithm using the array data structure.

**How it works:**

- Go through the values in the array one by one.

- Check if the current value is the lowest so far, and if it is, store it.

- After looking at all the values, the stored value will be the lowest of all values in the array.

## Implementation

Before implementing the algorithm using an actual programming language, it is usually smart to first write the algorithm as a step-by-step procedure.

If you can write down the algorithm in something between human language and programming language, the algorithm will be easier to implement later because we avoid drowning in all the details of the programming language syntax.

- Create a variable 'minVal' and set it equal to the first value of the array.
- Go through every element in the array.
- If the current element has a lower value than 'minVal', update 'minVal' to this value.
- After looking at all the elements in the array, the 'minVal' variable now contains the lowest value.

You can also write the algorithm in a way that looks more like a programming language if you want to, like this:

```
Variable 'minVal' = array[0]
For each element in the array
    If current element < minVal
        minVal = current element
```

**Note:** The two step-by-step descriptions of the algorithm we have written above is called 'pseudocode'

After we have written down the algorithm, it is much easier to implement the algorithm in a specific programming language:

```cpp
#include <iostream>
using namespace std;

int main() {
    int my_array[] = {7, 12, 9, 4, 11};
    int n = sizeof(my_array) / sizeof(my_array[0]);

    int minVal = my_array[0];   // Step 1

    for (int i = 0; i < n; i++) {   // Step 2
        if (my_array[i] < minVal) { // Step 3
            minVal = my_array[i];
        }
    }

    cout << "Lowest value: " << minVal << endl; // Step 4

    return 0;
}

```
