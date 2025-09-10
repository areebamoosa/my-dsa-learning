# Memory in C++

Memory is like a big cupboard where your computer keeps data while running a program.

When your program runs, it needs places to store variables, arrays, objects, etc.

The system divides memory into different sections where your data is placed

### Types of Memory in C++

In C++, memory is divided into 4 main areas:

## 1. Stack Memory

Used for local variables (inside functions).

**Example:**

```cpp
void func() {
    int x = 10; // stored in stack
}
```

- Automatically allocated when function starts.

- Automatically deallocated when function ends.

- Fast but limited in size.

## 2. Heap Memory

Used for dynamic memory allocation (when we use new, delete, malloc, free).

**Example:**

```cpp
int* p = new int;  // memory created in heap
*p = 20;
delete p;          // memory released
```

**Note:**

- We control it manually → we decide when to allocate and deallocate.

- Bigger than stack but slower to access.

- If you forget to delete, it causes memory leak.

## 3. Code / Text Segment

Stores the program’s code (instructions).

Read-only → you cannot modify it during execution.

**Example:**

Your main() function itself is here.

## 4. Global / Static Memory

Stores global variables, static variables, and constants.

Allocated once, for the whole program run.

**Example:**

```cpp
int g = 5; // stored in global segment
void func() {
    static int s = 0; // stays in memory for full program
    s++;
}
```

<br>

# Memory Allocation in C++

It means reserving space in memory to store data.

There are two types in C++:

## 1. Compile-time (Static Allocation)

Done automatically before program runs.

For global/static variables, or fixed-size arrays.

**Example:**

```cpp
int arr[5];  // fixed memory reserved
```

## 2. Run-time (Dynamic Allocation)

Done when program is running, using heap memory.

**Example:**

```cpp
int* p = new int; // allocate 1 int
delete p;         // free it
```

### How to Allocate & Deallocate Memory in C++

Using new and delete

```cpp
int* p = new int;   // allocate memory for 1 int
*p = 42;
delete p;           // free memory
```

#### For arrays:

```cpp
int* arr = new int[5];  // allocate array
delete[] arr;           // free array
```

Using malloc and free (C-style)

```cpp
int* p = (int*)malloc(sizeof(int)); // allocate
*p = 100;
free(p);                            // deallocate
```

## Difference:

- new calls constructor (for objects).

- malloc does not call constructor.

## Summary

**Stack** → local variables, auto allocated & deallocated.

**Heap** → manual allocation (new/delete), flexible size.

**Global/Static** → for global & static vars, fixed for whole program.

**Code** → program instructions.

**Allocation** = reserving memory.
**Deallocation** = freeing memory after use.

<br>

# Dynamic Memory Allocation

**Dynamic** = "decided at runtime" (when program is running).

Normally, when we declare variables like:

```cpp
int arr[5];
```

the size (5) is fixed at compile-time.

But sometimes, we don’t know in advance how much memory we’ll need (e.g., taking input from the user).

In that case, we use Dynamic Memory Allocation to request memory from the heap while the program is running.

### Why do we need DMA?

**Flexibility** → Allocate as much memory as you need, when you need it.

**Variable size arrays** → e.g., user enters n = 1000, you can make an array of size 1000 at runtime.

**Efficient use of memory** → Don’t waste memory if you don’t know exact size beforehand.

Objects & data structures like linked lists, trees, graphs require DMA.

## How to Do Dynamic Memory Allocation in C++:

### 1. Using new and delete

This is the modern C++ way.

**Allocate single variable:**

```cpp
int* p = new int;   // allocate memory for 1 integer
*p = 10;            // store value in it
cout << *p;         // prints 10
delete p;           // free memory
```

**Allocate array:**

```cpp
int n;
cin >> n;                // user gives size
int* arr = new int[n];   // array created dynamically

for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
}

for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}

delete[] arr;            // free memory
```

**Note:**

- new reserves memory from heap.

- delete releases memory (otherwise → memory leak).

- For arrays, always use delete[].

### 2. Using malloc() and free()

Still works in C++ but not preferred.

```cpp
int* p = (int*)malloc(sizeof(int)); // allocate 1 int
*p = 20;
cout << *p;   // prints 20
free(p);      // deallocate
```

**For arrays:**

```cpp
int* arr = (int*)malloc(5 * sizeof(int));
for (int i = 0; i < 5; i++) arr[i] = i;
free(arr);
```

### Difference:

- new also calls constructor if you create an object.

- malloc only allocates raw memory (no constructor).

### Common Mistakes in DMA

#### 1. Forgetting to delete memory → Memory Leak

```cpp
int* p = new int(5);
// forgot delete → memory never freed
```

#### 2. Deleting twice → Undefined Behavior

```cpp
delete p;
delete p;  // ❌ crash risk
```

#### 3. Using memory after delete

```cpp
int* p = new int(10);
delete p;
cout << *p; // ❌ dangling pointer
```

### Real-Life Example

Suppose we are making a program that takes number of students at runtime and stores their marks.

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    // allocate memory for n students
    int* marks = new int[n];

    // input marks
    for (int i = 0; i < n; i++) {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // display marks
    cout << "\nStudent marks:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
    }

    delete[] marks;  // free memory
    return 0;
}
```

Here the size of the array depends on user input, which is only possible with dynamic memory allocation.

### Summary

- Dynamic memory allocation = creating memory at runtime (from heap).

- new / delete → Modern C++ style.

- malloc / free → Old C style.

- Must always delete/free after use (to avoid memory leaks).

- Needed for flexibility, variable size data, and data structures

---

# Memory Allocation & Deallocation in Constructors and Destructors

## 1. Constructor

When you create an object, memory is allocated automatically.

The constructor runs after memory allocation to initialize the object.

You can also use the constructor to allocate extra memory dynamically (using new).

## 2. Destructor

When the object’s lifetime ends (goes out of scope or is deleted), the destructor is called automatically.

It is used to deallocate/free memory (using delete) that was allocated in the constructor.

If you don’t free memory → memory leak.

### Example: Normal Object (Automatic Memory)

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Constructor: Memory allocated automatically" << endl;
    }

    ~Student() {
        cout << "Destructor: Memory released automatically" << endl;
    }
};

int main() {
    Student s1; // constructor runs, memory allocated
} // destructor runs here, memory freed
```

**Output:**

**Constructor:** Memory allocated automatically
**Destructor:** Memory released automatically

Here, memory is handled by compiler automatically.

### Example: Dynamic Memory Allocation

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    int* marks;

    // Constructor allocates memory
    Student() {
        marks = new int;  // dynamically allocate memory
        *marks = 100;
        cout << "Constructor: Memory allocated for marks" << endl;
    }

    // Destructor frees memory
    ~Student() {
        delete marks;  // free allocated memory
        cout << "Destructor: Memory deallocated for marks" << endl;
    }
};

int main() {
    Student* s1 = new Student(); // constructor allocates memory
    delete s1; // destructor called, memory freed
}
```

**Output:**

**Constructor:** Memory allocated for marks
**Destructor:** Memory deallocated for marks

Here, we used new inside constructor and delete inside destructor.
This way, no memory leak happens

### Summary

**Constructor** → runs when object is created → initializes object → can also allocate memory (new).

**Destructor** → runs when object is destroyed → cleans up object → frees memory (delete)

So think like this:

**Constructor** = “💾 Reserve memory + Set up the object”

**Destructor** = “🗑️ Free memory + Clean up the object”
