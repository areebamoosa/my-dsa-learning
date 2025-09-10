# Loops

## 1. For loop

### Syntax

```cpp
for (initialisation; condition; iteration){
    //code
}
```

## 2. While loop

```cpp

#include<iostream>
using namespace std;

int main(){
    int count = 1;

    while(count <= 5){
        cout << count << "" ;
        count++;
    }
    cout <<endl;
    return 0;
}

```

## 3. Do - While loop

The code will execute atleast 1 time and then check condition.

```cpp

#include<iostream>
using namespace std;

int main(){
    int n  = 10;
    int i = 1;

do{
    cout << i << "" ;
    i++;
}
    while(i <= n);
    cout << endl;
    return 0;
}

```

## Nested Loops

Loop inside loop

