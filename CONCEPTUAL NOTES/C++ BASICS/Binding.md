# Binding in C++

Binding means: deciding which function will run when you call it.

There are two types:

1. Early Binding (Compile-Time Binding / Static Binding)

2. Late Binding (Run-Time Binding / Dynamic Binding)

## 1. Early Binding (Static Binding)

Decision happens at compile time.

Compiler already knows which function to call.

Fast, but less flexible.

Happens in normal function calls and function overloading.

**Example:**

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {   // normal function
        cout << "Animal makes a sound" << endl;
    }
};

int main() {
    Animal a;
    a.sound(); // compiler already knows to call Animal::sound()
}
```

**Output:**

```cpp
Animal makes a sound
```

Here the function is fixed at compile time → Early Binding

## 2. Late Binding (Dynamic Binding)

Decision happens at run time.

Which function to call depends on the type of object created at runtime.

Achieved using virtual functions.

Slightly slower, but much more flexible (used in polymorphism).

**Example**

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {  // virtual enables late binding
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {  // override base function
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;   // base class pointer
    Dog d;

    a = &d;      // pointer points to Dog object
    a->sound();  // which sound()? decided at runtime
}
```

**Output:**

```cpp

Dog barks
```

Even though a is a pointer to Animal, at runtime it points to Dog, so Dog’s sound() runs.
This is Late Binding.

In super simple words:

- **Early Binding** = Teacher already assigns you the topic before class (fixed early).

- **Late Binding** = Teacher waits till class starts to decide who presents (decided later).
  <br>

| Feature       | Early Binding (Static)        | Late Binding (Dynamic)       |
| ------------- | ----------------------------- | ---------------------------- |
| When decided? | At **compile time**           | At **run time**              |
| How?          | Normal functions, overloading | Virtual functions            |
| Speed         | Faster                        | Slower                       |
| Flexibility   | Less flexible                 | More flexible                |
| Example       | `obj.func()`                  | `ptr->func()` with `virtual` |
