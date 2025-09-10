# this pointer

Every object in C++ has its own data (variables).

When you call a member function on an object, C++ secretly passes a pointer called this to the function.

👉 this pointer points to the current object (the object that called the function).

## 🔹 Why do we need it?

To refer to current object’s data members (helps avoid confusion if variable names clash).

To return the same object from a function (used in method chaining).

### Basic Example 1: Avoiding confusion

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;

    // Constructor
    Student(string name) {
        // "this->name" means current object's name
        this->name = name;
    }

    void show() {
        cout << "Name: " << this->name << endl;
    }
};

int main() {
    Student s1("Areeba");
    s1.show();
}
```

**Output:**

```cpp
Name: Areeba
```

Without this ->, the compiler would be confused between constructor parameter name and class variable name.

---

This pointer basically points to the object that is calling the function.

## Visual Diagram

+-------------------+
| Object (s1) |
|-------------------|
| name = "Areeba" |
| age = 20 |
+-------------------+
^
|
this (inside methods)

👉 When you call s1.show(), inside the function this points to s1.

### Basic Example 2: Method Chaining

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student& setName(string name) {
        this->name = name;
        return *this; // return current object
    }

    Student& setAge(int age) {
        this->age = age;
        return *this; // return current object
    }

    void show() {
        cout << name << " - " << age << endl;
    }
};

int main() {
    Student s1;
    // Method chaining using "this"
    s1.setName("Areeba").setAge(20).show();
}
```

**Output:**

Areeba - 20

👉 Here this lets us return the same object, so we can chain function calls in one line.

### Summary in Simple Words

this pointer = address of the current object.

**Used when:**

- Local variable name clashes with member variable.

- Returning current object (method chaining).
