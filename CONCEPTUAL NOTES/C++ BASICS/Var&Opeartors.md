# Basic Concepts of C++ Language

## Variables

Containers to store data.

### Example

```cpp
int age = 5;
```

Here age is a variable (container) in which a value is stored.

## Data Types

- int = 4 Bytes
- char = 1 Bytes
- float = 4 Bytes
- bool = 1 Bytes
- double = 8 Bytes

## Type Casting

Converting Data from one type to another.

---

## Operators

## 1. Arithmetic Operators

- Addition (+)
- Subtraction(-)
- Multiplication (\*)
- Division (/)
- Modulo (%)

#### Example

```cpp
#include <iostream>
using namespace std;

int main(){
    int a = 10, b = 20;

    cout << "Sum =  " << (a+b) << endl;
    cout << "Difference =  " << (a-b) << endl;
    cout << "Multiplication =  " << (a*b) << endl;
    cout << "Division =  " << (a/b) << endl;
    cout << "Modulo =  " << (a%b) << endl;

    return 0;
}
```

When we perform tasks between different data types

```cpp
int / int = int
int / float = float
int / double = double
```

---

## 2. Relational Operators

- ( < )
- ( > )
- ( <= )
- ( >= )
- ( == )
- ( != )

---

## 3. Logical Operators

- OR ( || )
- AND ( && )
- NOT ( ! )

## 4. Unary Operators

- ### Increment ( ++ )

1. Post Increment (a++)
1. Pre Increment (++a)

#### Example

```cpp
#include<iostream>
using namespace std;

int main(){
    int a = 10;

    int b = ++a;
    cout << b << endl; //11
    cout << a << endl; //10
}


```

- ### Decrement ( --)

1. Post Decrement (b--)
1. Pre Decrement (--b)

#### Example

```cpp
#include<iostream>
using namespace std;

int main(){
    int b = 20;

    int c = --b;
    cout << c << endl; //19
    cout << b << endl; //20
}
```
