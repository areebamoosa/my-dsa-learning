# FUNCTIONS

## Syntax

```cpp
returnType prinntHello(){
    cout << "Hello";
}
```

### Example

```cpp

#include<iostream>
using namespace std;

// Function Definition
void printHello(){
    cout << "Hello \n";
}

int main(){
    // Function Call
    printHello();
}

//Void return type no value

```

```cpp

// If we want a fuction to return a value:

#include<iostream>
using namespace std;

// Function type : int
int printHello(){
    cout << "Hello \n";
    return 3;
}

int main(){
    int val = printHello();
    cout << Val : << endl;

    return 0;
}

// This will return :
Hello
Val : 3

```

## Function with Parameters

```cpp

#include<iostream>
using namespace std;

//sum of 2 numbers
int sum(int a, int b){ //Parameters
    int s = a + b;
    return s;
}

int main(){
    cout << sum(10,5); //Arguments

    return 0;
}

```

## Pass by Value :

Copy of Argument is Passed to function
