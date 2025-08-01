# CONDITIONAL STATEMENTS

## 1. If - else statement

```cpp
#include<iostream>
using namespace std;

int main(){
    int  = 45;

    if ( n >= 0){
        cout << "n is positive" << endl;
    }
    else{
        cout <<"n is negative" << endl;
    }
    return 0;
}

```

## 2. if - else if - else statement

```cpp
#include<iostream>
using namespace std;

int main(){
    int  marks;
    cout << "Enter marks : " << endl;
    cin >> marks;

    if ( marks >= 90){
        cout << "A \n" << endl;
    }
    else if(marks >= 80 && marks < 90 ){
        cout <<"B \n" << endl;
    }
    else{
        cout <<"C \n" << endl;
    }
    return 0;
}
```

## Ternary Statements

`condition ? statement1 : statement2; `

### Example

```cpp
 n >= 0 ? "pos" : "neg";
```
